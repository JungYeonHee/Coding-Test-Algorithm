#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

int main(){
	
	string str;
	bool minus = false;
	int result = 0;
	string num = "";

	cin >> str; //���� ���ڿ���  �Է¹ޱ�
	
	for(int i = 0; i < str.length(); i++){
		if(str[i] == '+' || str[i] == '-'){	
			if(minus){
				result -= stoi(num); // string -> int 
			}else{
				result += stoi(num);
			}
	
			num = ""; //�ʱ�ȭ (�̹� ������ �����Ƿ�) 
			
			if (str[i] == '-') // 
				minus = true; 
			cout << result << endl;			
			continue;
		}
		
		// ���ڰ� �����ؼ� ������ ���� string���� �� ���� ���̱� 
		num += str[i];	 	
		
	}
	
	//������ ���� ���� ó��  
	if(minus){
		result -= stoi(num); // string -> int 
	}else{
		result += stoi(num);
	}
	
	cout << result;
}
