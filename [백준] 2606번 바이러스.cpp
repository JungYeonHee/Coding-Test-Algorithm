#include<iostream>
using namespace std;

int comArr[100][100] = {0};
int visited[100] = {0};
int result = 0;

void dfs(int x, int n){
	result++;
	visited[x] = 1; // ���� ��� �湮 ǥ��  
	
	// ���� ���� ����� �ٸ� ��� ��湮
	for(int i = 0; i < n; i++){
		if(visited[i] == 0 && comArr[x][i] == 1) 
			
			dfs(i, n); 
	}
}

int main(){
	
	int n, pairN, x, y;
	
	cin >> n;
	
	//�Է¹��� ��ǻ�� �� ��ŭ ������� �ʱ�ȭ  
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			comArr[i][j] = 0;
		}
	}
	
	cin >> pairN;
	
	for(int i = 0; i < pairN; i++){
			cin >> x >> y;
			comArr[x-1][y-1] = 1;
			comArr[y-1][x-1] = 1;
	}
		
	dfs(0, n);

	cout << result-1;
}
