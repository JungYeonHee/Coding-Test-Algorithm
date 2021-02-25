#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//이진 탐색  
int binarySearch(vector<int>& arr, int target, int start, int end){
	int sum = 0;
	
	while(start <= end){
		int mid = (start + end)/2;
	
		for(int i = 0; i < arr.size(); i++){				
				// 떡 높이가 절단기보다 긴 경우(양수인 경우) 
				if(arr[i] > mid)
					sum += arr[i] - mid;
				else // 음수인 경우 다음 반복문 수행  
					continue;	
		}	
		
		//떡의 양이 부족한 경우 더 많이 자르기 (왼쪽 부분 탐색) 
		if(sum < target){
			end = mid - 1;
		}// 떡의 양이 충분한 경우 덜 자르기 ( 오른쪽 부분 탐색) 
		else if ( sum > target){
			start = mid + 1;
		}else{ // 떡의 양이 요청한 떡의 길이와 같을 경우  
			return mid;
		}
		
		sum = 0;
		
	}
}

int main(void){
	int n, m;
	vector<int> arr;
	
	//떡의 개수(N)와 요청한 떡의 길이(M)을 입력받기  
	cin>>n>>m;
	
	//각 떡의 개별 높이 정보 입력받기  
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		
		arr.push_back(x);
	}
	
	//이진 탐색을 위한 오름차순 정렬  
	sort(arr.begin(), arr.end());
	
	int result = binarySearch(arr, m, 0, arr[n-1]);
	cout << result;
	
}
