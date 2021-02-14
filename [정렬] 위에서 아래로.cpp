#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// 왼쪽을 기준으로 정렬(왼쪽에 더 큰 수) 
bool compare(int a, int b) {
	return a > b;
} 

int main(void){

	int n;
	vector<int> v;
	
	// N을 입력받기  
	cin>>n;
	
	// N개의 수 입력 받기  
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	
	 // 기본 정렬 라이브러리를 이용하여 내림차순 정렬 수행
	sort(v.begin(), v.end(), compare);
	
	//출력  
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
}
