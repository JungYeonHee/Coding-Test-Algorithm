#include <iostream>
#include <queue>
#include <stdio.h>

using namespace std;

int n,m;
int map[101][101] = {0};

//�����¿�  
int dx[4] = {0, 0, -1, 1}; 
int dy[4] = {1, -1, 0, 0};


void bfs(int x, int y){
	
		queue<pair<int, int>> q;
     	q.push(pair<int,int>(x,y)); //ť�� ������ �� �ֱ� 

		while(!q.empty()){
			int currentX = q.front().first; // ���� x ��ġ Ȯ��  
			int currentY = q.front().second; // ���� y ��ġ Ȯ��  
			
			q.pop(); // ť���� ����  
				 
			//�����¿�� �����̴� ��ǥ  
			for(int i = 0; i < 4; i++){
				int afterX = currentX + dx[i]; 
				int afterY = currentY + dy[i]; 
				
				// �̷� ���� ������ ������ ���� 
				if(afterX < 0 || afterX > n || afterY < 0 || afterY > m){
					continue;
				} 
				
				if(map[afterX][afterY] == 1){
					map[afterX][afterY] = map[currentX][currentY] + 1; // ���� �湮�� + 1 = ���� �湮
					q.push(pair<int,int>(afterX,afterY));
				}
			
			}
		}
}


int main(){
 
	cin >> n >> m;

	//�Է¹��� �̷� �迭  
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			scanf("%1d", &map[i][j]); // ���� ���� ���� �Է� �ޱ� 
		}
	}
	
	
	bfs(1, 1);
	
	cout << map[n][m];
}
