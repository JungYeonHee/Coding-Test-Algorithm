#include<iostream>
#include<vector>
using namespace std;

int d[41][2] = { {1,0}, {0,1} }; //dp ���̺�(��� ����� ���̺�) 

int main(){
	
	int t; // �׽�Ʈ ���̽��� ����  
	vector<int> v; // �׽�Ʈ ���̽� ���� ����  

	cin >> t;
	
	int n;
	for(int i = 0; i < t; i++){
		cin >> n;
		
		v.push_back(n);
	}
	
	for(int i = 0; i < v.size(); i++){
		if(v[i] == 0 || v[i] == 1){
			continue;
		}else{
			for(int j = 2; j <= v[i]; j++){
				d[j][0] = d[j-1][0] + d[j-2][0];
				d[j][1] = d[j-1][1] + d[j-2][1];
			}	
		}
	}
	
	for(int i = 0; i < v.size(); i++){
		cout << d[v[i]][0] << " " << d[v[i]][1] << "\n";
	}
	
	
}
