#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// ���� Ž�� �ҽ��ڵ� ����(�ݺ���)
int binarySearch(vector<int>& arr, int target, int start, int end) {
    while (start <= end) {
        int mid = (start + end) / 2; // ã�� ��� �߰��� �ε��� ��ȯ
        
        if (arr[mid] == target) return mid;  // �߰����� ������ ã���� �ϴ� ���� ���� ��� ���� Ȯ��
        else if (arr[mid] > target) end = mid - 1; // �߰����� ������ ã���� �ϴ� ���� ū ��� ������ Ȯ��  
        else start = mid + 1; 
    }
    return -1;
}


int main(void) {
    int n, m;
	vector<int> arrN, arrM;
    
    // ��ǰ ���� �Է� �ޱ�  
    cin >> n;
    
    // ��ü ��ǰ ����  �Է� �ޱ� 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arrN.push_back(x);
    }
    
    sort(arrN.begin(), arrN.end());
    
    // ������ ��ǰ ���� �Է� �ޱ�  
    cin >> m;
    
    // ������ ��ǰ ����  �Է� �ޱ� 
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        arrM.push_back(x);
    }
    
    
    
   // ������ ��ǰ ���� ��ŭ �ݺ��� ����  
    for(int i = 0; i < m; i++){
    	int result = binarySearch(arrN, arrM[i], 0, n - 1);
    	
    	 // ���� Ž�� ���� ��� ��� 
    	if (result == -1) {
        	cout << "no ";
    	}
    	else {
        	cout << "yes ";
    	}
	}
    
    
}

