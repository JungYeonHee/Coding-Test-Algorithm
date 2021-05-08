#include<iostream>
using namespace std;

int graph[1000][1000] = {0};
int visited[1000] = {0};

int result = 0; 

void dfs(int x, int n){

	visited[x] = 1; // ���� ��� �湮 ǥ��  
	for(int i = 0; i < n; i++){
		if(visited[i] == 0 && graph[x][i] == 1) {
				dfs(i, n); 
		}
	}
}

int main(){
	int n, m; //������ ���� n, ������ ���� m  
	cin >> n >> m;
	
	//�Է¹��� ��ǻ�� �� ��ŭ ������� �ʱ�ȭ  
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			graph[i][j] = 0;
		}
	}
	
	int u, v; // ������ �� ���� u ,v
	for(int i = 0; i < m; i++){
			cin >> u >> v;
			graph[u-1][v-1] = 1;
			graph[v-1][u-1] = 1;
	}

	for(int i = 0; i < n; i ++){
		if(visited[i] != 1){
			result ++;
			dfs(i,n);
		}
	
	}

	
	cout << result;
}
