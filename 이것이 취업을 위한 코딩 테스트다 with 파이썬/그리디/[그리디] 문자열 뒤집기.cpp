#include <iostream>
#include <vector>
using namespace std;

int min(int m1, int m2){
	if(m1<m2){
		return m1;
	}
	else{
		return m2;
	}
}

int main(void) { 
    
	string s;
    vector<int> v;
	int zeroCnt = 0; //전부 0으로 바뀌는 경우  
    int oneCnt = 0;  //전부 1로 바뀌는 경우  
 
 	cin>>s;
 	
 	for(int i=0; i<s.size(); i++){
        v.push_back(s.at(i)-'0');
    }
 
     // 첫 번째 원소에 대해서 처리 
     if (v[0] == 1) { 
         zeroCnt += 1; 
     } 
     else { 
         oneCnt += 1; 
     } 
 
 
     // 두 번째 원소부터 모든 원소를 확인하며 
     for (int i = 0; i < v.size() - 1; i++) { 
         if (v[i] != v[i + 1]) { 
             if (v[i + 1] == 1) zeroCnt += 1;  // 다음 수에서 1로 바뀌는 경우
             else oneCnt += 1; // 다음 수에서 0으로 바뀌는 경우 
         } 
     } 
 
 
     cout << min(zeroCnt, oneCnt); 
 } 

