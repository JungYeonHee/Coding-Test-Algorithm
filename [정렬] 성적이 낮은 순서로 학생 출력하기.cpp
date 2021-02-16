#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//오름차순 정렬 비교 기준 함수   
bool compare(pair<string, int> a, pair<string, int> b ){
	return a.second < b.second;
}

int main(void){
	
	int n;
	
	cin >> n;
	
	vector<pair<string, int> > v; //vector에 pair 타입으로 선언  
	
	for(int i = 0; i < n; i ++){
		string name;
		int score;
		
		cin >> name >> score; //공백을 기준으로 값 받기  
		// make_pair를 이용해 assign하는 방법, 이 함수에서 인자를 넘기면 암묵적 변환이 된다고 한다.	
		v.push_back(make_pair(name, score)); 
	}
	
	sort(v.begin() , v.end(), compare); // 오름차순 정렬  
	
	for(int i = 0; i < v.size(); i++){
		cout << v[i].first << " " ; // 쌍으로 저장한 값중 이름만 출력  
	}
	
}
