#include<iostream>
#include<vector>
#include<algorithm> 

using namespace std;

int main(){
	int n,x;
	int target = 1; //������ �ϴ� �ݾ�  
	
	vector<int> v;
	
	cin>>n;
	
	for(int i=0; i<n; i++){
		cin>>x;
		v.push_back(x);
	}
	
	sort(v.begin(), v.end()); //�������� ����

	
	for(int i=0; i<v.size(); i++){
		if(target < v[i]) // ���� �� ���� �ݾ��� ã���� �� �ݺ� ���� : ������ �ϴ� �ݾ� < ���� index�� ȭ�� ���� 
			break;
		else target += v[i]; // target = ���� index ���� ���� �� �ִ� �ݾ� + 1 
	} 
	
	cout<<target;
	
}
