#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	string s; //입력 값 
	vector<int> v;
	int result = 0; // 두 수의 계산 값
	
	cin>>s;
	
	for(int i=0; i<s.size(); i++){
	    v.push_back(s.at(i) -'0'); //문자열을 순서대로 정수로 나눠 벡터에 저장  
	}
	
	result = v[0]; // 첫번째 값을 result에 합산  

	for(int i=0; i<v.size()-1; i++){ //두번째 값부터 마지막 값까지 계산 수행
		if(result <= 1 || v[i+1] <= 1){ // 두 수 중에서 하나라도 '0' 혹은 '1'인 경우, 곱하기보다는 더하기 수행
			result = result + v[i+1];	
		}
		else{
			result = result * v[i+1];
		}
	}	
	cout<<result;	
}
