#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int a, int b){
	return a > b;
} 

int main(void){
	
	int n,k;
	vector<int> arrA, arrB;
	
	//N�� K�� �Է¹ޱ�  
	cin >> n >> k;
	
	// �迭 A�� ��� ���Ҹ� �Է¹ޱ�  
	for(int i = 0; i < n; i ++){
		int a;
		cin >> a;
		arrA.push_back(a);
	}
	
	// �迭 B�� ��� ���Ҹ� �Է¹ޱ�  
	for(int i = 0; i < n; i ++){
		int b;
		cin >> b;
		arrB.push_back(b);
	}
	
	sort(arrA.begin(), arrA.end()); // �迭 A �������� ���� (���� �������) 
	sort(arrB.begin(), arrB.end(), compare); // �迭 B �������� ���� (ū �������) 
		
	// �� �迭�� ���Ҹ� �ִ� K�� ��  
	for(int i = 0; i < k; i++){
		if(arrA[i] < arrB[i]){ // A�� ���Һ��� B�� ���Ұ� ū ��� �� ���� ��ü  
			int temp = arrA[i];
		    arrA[i] = arrB[i];
		    arrB[i] = temp;
		}  
		else   // A�� ���Ұ� B�� ���Һ��� ũ�ų� ���� ��, �ݺ����� Ż��
			break;
	} 
	
	int sum = 0;
		
	for(int i = 0; i < n; i++){
		sum += arrA[i];
	}
	
	cout << sum;
}
