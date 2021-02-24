#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 이진 탐색 소스코드 구현(반복문)
int binarySearch(vector<int>& arr, int target, int start, int end) {
    while (start <= end) {
        int mid = (start + end) / 2; // 찾은 경우 중간점 인덱스 반환
        
        if (arr[mid] == target) return mid;  // 중간점의 값보다 찾고자 하는 값이 작은 경우 왼쪽 확인
        else if (arr[mid] > target) end = mid - 1; // 중간점의 값보다 찾고자 하는 값이 큰 경우 오른쪽 확인  
        else start = mid + 1; 
    }
    return -1;
}


int main(void) {
    int n, m;
	vector<int> arrN, arrM;
    
    // 부품 갯수 입력 받기  
    cin >> n;
    
    // 전체 부품 원소  입력 받기 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arrN.push_back(x);
    }
    
    sort(arrN.begin(), arrN.end());
    
    // 문의한 부품 갯수 입력 받기  
    cin >> m;
    
    // 문의한 부품 원소  입력 받기 
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        arrM.push_back(x);
    }
    
    
    
   // 문의한 부품 갯수 만큼 반복문 수행  
    for(int i = 0; i < m; i++){
    	int result = binarySearch(arrN, arrM[i], 0, n - 1);
    	
    	 // 이진 탐색 수행 결과 출력 
    	if (result == -1) {
        	cout << "no ";
    	}
    	else {
        	cout << "yes ";
    	}
	}
    
    
}

