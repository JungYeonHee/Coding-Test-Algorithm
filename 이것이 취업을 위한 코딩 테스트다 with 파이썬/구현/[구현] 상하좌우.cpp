#include<iostream>

using namespace std;

int main(void){
	
	int n;
	string plans;
	int x = 1, y = 1; //column, row 
	
	// L, R, U, D�� ���� �̵� ���� 
	char way[4] = {'L', 'R', 'U', 'D'};
	
	cin >> n;
	cin.ignore(); // '\n'�� ���� ������ �ش� ���̸� ����  
	getline(cin, plans); // �� �ٿ��� ����ڰ� ���͸� ������ �������� ���� �Է¹޴´�.

	
	for(int i = 0; i< plans.size(); i++){ //�̵� ��ȹ�� �ϳ��� Ȯ��  
		char plan = plans[i];
		
		if(plan == way[0] && y > 1){ //���� y ��ġ�� 1 ���� ũ�ٸ�, �������� �� ĭ �̵�  
			y-=1;	
		}
		else if(plan == way[1] && y < n){ //���� y ��ġ�� n ���� �۴ٸ�,  ���������� �� ĭ �̵�
			y+=1;				
		}
		else if(plan == way[2] && x > 1 ){ //���� x ��ġ�� 1 ���� ũ�ٸ�, ���� �� ĭ �̵�
			x-=1;
		}
		else if(plan == way[3] && x < n ){//���� x ��ġ�� n ���� �۴ٸ�, �Ʒ��� �� ĭ �̵�
			x+=1;
		}

	}

	cout << x << " " << y;
	
}
