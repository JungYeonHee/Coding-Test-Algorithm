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
	int zeroCnt = 0; //���� 0���� �ٲ�� ���  
    int oneCnt = 0;  //���� 1�� �ٲ�� ���  
 
 	cin>>s;
 	
 	for(int i=0; i<s.size(); i++){
        v.push_back(s.at(i)-'0');
    }
 
     // ù ��° ���ҿ� ���ؼ� ó�� 
     if (v[0] == 1) { 
         zeroCnt += 1; 
     } 
     else { 
         oneCnt += 1; 
     } 
 
 
     // �� ��° ���Һ��� ��� ���Ҹ� Ȯ���ϸ� 
     for (int i = 0; i < v.size() - 1; i++) { 
         if (v[i] != v[i + 1]) { 
             if (v[i + 1] == 1) zeroCnt += 1;  // ���� ������ 1�� �ٲ�� ���
             else oneCnt += 1; // ���� ������ 0���� �ٲ�� ��� 
         } 
     } 
 
 
     cout << min(zeroCnt, oneCnt); 
 } 

