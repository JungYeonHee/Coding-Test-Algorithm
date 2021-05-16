#include<iostream>
#include<vector>
#include<algorithm> 

using namespace std;

int main(){
	int n,x;
	int target = 1; //만들어야 하는 금액  
	
	vector<int> v;
	
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>x;
		v.push_back(x);
	}
	
	sort(v.begin(), v.end()); //오름차순 정렬

	
	for(int i=0; i<v.size(); i++){
		if(target < v[i]) // 만들 수 없는 금액을 찾았을 때 반복 종료 : 만들어야 하는 금액 < 현재 index의 화폐 단위 
			break;
		else target += v[i]; // target = 현재 index 까지 만들 수 있는 금액 + 1 
	} 
	
	cout<<target;
	
}
