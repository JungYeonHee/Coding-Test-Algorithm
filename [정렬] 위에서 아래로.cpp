#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// ������ �������� ����(���ʿ� �� ū ��) 
bool compare(int a, int b) {
	return a > b;
} 

int main(void){

	int n;
	vector<int> v;
	
	// N�� �Է¹ޱ�  
	cin>>n;
	
	// N���� �� �Է� �ޱ�  
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.push_back(x);
	}
	
	 // �⺻ ���� ���̺귯���� �̿��Ͽ� �������� ���� ����
	sort(v.begin(), v.end(), compare);
	
	//���  
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
}
