#include<iostream>
using namespace std;

int n, m, x, y, direction;
int dMap[50][50]; // �湮�� ��ġ�� �����ϱ� ���� ���� �����Ͽ� 0���� �ʱ�ȭ
int arr[50][50]; //���� �� ������ ����  
	
		// ��, ��, ��, ��   
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
	
void turnLeft() { //�������� ȸ��  
     direction -= 1; 
     if (direction == -1) 
	 	 direction = 3;  // ���� �ٵ��� �ٽ� ������ ������ 
   
 } 

int main(void){
	
	cin>>n>>m; // �� ũ��  
	cin>>x>>y>>direction; // ���� ĳ���Ͱ� �ִ� ���� ��ǥ, ����  
	
	dMap[x][y] = 1; // ���� ��ǥ �湮 ó��  
		
	for(int i=0; i<n; i++){ // �� ���� �Է�  
		for(int j=0; j<m; j++){	
			cin>>arr[i][j];
		}
	}

	int count = 1; // �湮�� ĭ ��  
	int unaccept = 0; // �� �� ���� ����  
	while(true){
		//�������� ȸ�� 
		turnLeft();  
		//�������� �� ĭ ����  
		int turnX = x + dx[direction]; //turnX��  x �̵���ǥ ����
		int turnY = y + dy[direction]; //turnY��  y �̵���ǥ ����
		
		// ȸ���� ���� ���鿡 ������ ���� ĭ�� �����ϰ� ������ ��� �̵�
		if(dMap[turnX][turnY] == 0 && arr[turnX][turnY] == 0){
			dMap[turnX][turnY] = 1; //�̵� ��ǥ �湮 ó��  
			//�̵� ��ǥ�� ���� ��ǥ�� ����  
			x = turnX;  
			y = turnY;
			// �湮�� ĭ �� ����  
			count += 1;
			unaccept = 0; // �� �� ���� ���� �ʱ�ȭ  
			continue; 
		}// ȸ���� ���� ���鿡 ������ ���� ĭ�� ���ų� �ٴ��� ���  
		else{
			unaccept += 1; // �� �� ���� ���� ����  
		}
	
		// �� ���� ��� �� �� ���� ���
		if(unaccept == 4){
			//�ٶ󺸴� ���� ������ ä ��ĭ �ڷ� ����  
			turnX = x - dx[direction]; // ���� x��ǥ ��������
			turnY = y - dy[direction]; // ���� y��ǥ ��������
			// �ڷ� �� �� �ִٸ� �̵��ϱ�
			if(arr[turnX][turnY] == 0){
				x = turnX; 
				y = turnY;
			}else{	// �ڰ� �ٴٷ� �����ִ� ��� �� �� �����Ƿ� ����  
				break; 
			}
			unaccept = 0; //�� �� ���� ���� �ʱ�ȭ  
			
		}
	} 
	
	cout<<count;
	
}
