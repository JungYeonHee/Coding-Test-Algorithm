#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//���� Ž��  
int binarySearch(vector<int>& arr, int target, int start, int end){
	int sum = 0;
	
	while(start <= end){
		int mid = (start + end)/2;
	
		for(int i = 0; i < arr.size(); i++){				
				// �� ���̰� ���ܱ⺸�� �� ���(����� ���) 
				if(arr[i] > mid)
					sum += arr[i] - mid;
				else // ������ ��� ���� �ݺ��� ����  
					continue;	
		}	
		
		//���� ���� ������ ��� �� ���� �ڸ��� (���� �κ� Ž��) 
		if(sum < target){
			end = mid - 1;
		}// ���� ���� ����� ��� �� �ڸ��� ( ������ �κ� Ž��) 
		else if ( sum > target){
			start = mid + 1;
		}else{ // ���� ���� ��û�� ���� ���̿� ���� ���  
			return mid;
		}
		
		sum = 0;
		
	}
}

int main(void){
	int n, m;
	vector<int> arr;
	
	//���� ����(N)�� ��û�� ���� ����(M)�� �Է¹ޱ�  
	cin>>n>>m;
	
	//�� ���� ���� ���� ���� �Է¹ޱ�  
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		
		arr.push_back(x);
	}
	
	//���� Ž���� ���� �������� ����  
	sort(arr.begin(), arr.end());
	
	int result = binarySearch(arr, m, 0, arr[n-1]);
	cout << result;
	
}
