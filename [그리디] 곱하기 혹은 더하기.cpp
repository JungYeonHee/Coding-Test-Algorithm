#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	string s; //�Է� �� 
	vector<int> v;
	int result = 0; // �� ���� ��� ��
	
	cin>>s;
	
	for(int i=0; i<s.size(); i++){
	    v.push_back(s.at(i) -'0'); //���ڿ��� ������� ������ ���� ���Ϳ� ����  
	}
	
	result = v[0]; // ù��° ���� result�� �ջ�  

	for(int i=0; i<v.size()-1; i++){ //�ι�° ������ ������ ������ ��� ����
		if(result <= 1 || v[i+1] <= 1){ // �� �� �߿��� �ϳ��� '0' Ȥ�� '1'�� ���, ���ϱ⺸�ٴ� ���ϱ� ����
			result = result + v[i+1];	
		}
		else{
			result = result * v[i+1];
		}
	}	
	cout<<result;	
}
