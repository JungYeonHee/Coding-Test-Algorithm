#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int a, int b){
	return a > b;
} 

int main(void){
	
	int n,k;
	vector<int> arrA, arrB;
	
	//N과 K를 입력받기  
	cin >> n >> k;
	
	// 배열 A의 모든 원소를 입력받기  
	for(int i = 0; i < n; i ++){
		int a;
		cin >> a;
		arrA.push_back(a);
	}
	
	// 배열 B의 모든 원소를 입력받기  
	for(int i = 0; i < n; i ++){
		int b;
		cin >> b;
		arrB.push_back(b);
	}
	
	sort(arrA.begin(), arrA.end()); // 배열 A 오름차순 정렬 (작은 순서대로) 
	sort(arrB.begin(), arrB.end(), compare); // 배열 B 내림차순 정렬 (큰 순서대로) 
		
	// 두 배열의 원소를 최대 K번 비교  
	for(int i = 0; i < k; i++){
		if(arrA[i] < arrB[i]){ // A의 원소보다 B의 원소가 큰 경우 두 원소 교체  
			int temp = arrA[i];
		    arrA[i] = arrB[i];
		    arrB[i] = temp;
		}  
		else   // A의 원소가 B의 원소보다 크거나 같을 때, 반복문을 탈출
			break;
	} 
	
	int sum = 0;
		
	for(int i = 0; i < n; i++){
		sum += arrA[i];
	}
	
	cout << sum;
}
