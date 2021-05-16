#include<iostream>
using namespace std;

int n,m;
int graph[1000][1000];
	
// DFS�� Ư�� ��带 �湮�ϰ� ����� ��� ���鵵 �湮
bool dfs(int x, int y){
	// �־��� ������ ����� ��쿡�� ��� ����
	if(x < 0 || x > n - 1 || y < 0 || y > m - 1){
		return false;
	}
	
	// ���� ��带 ���� �湮���� �ʾҴٸ�
	if(graph[x][y] == 0){
		// ������ �շ� �ִ� �κ� �湮 ó��  
		graph[x][y] = 1;
		
		// ��, ��, ��, ���� ��ġ�鵵 ��� ��������� ȣ��  
		dfs(x - 1, y); 
		dfs(x + 1, y); 
		dfs(x, y - 1); 
		dfs(x, y + 1); 
		
		return true; 
	}
	
	return false; // ĭ���̰� �����ϴ� �κ�  
}

int main(void){
	
	int result = 0;
	// N, M�� ������ �������� �����Ͽ� �Է� �ޱ�
	cin >> n >> m;	
	
	// 2���� ����Ʈ�� �� ���� �Է� �ޱ�
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%1d", &graph[i][j]);
		}
	}
	
	// ��� ���(��ġ)�� ���Ͽ� ����� ä���
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(dfs(i,j)){
				result += 1;
			}
		}
	}
	
	cout << result;
}
