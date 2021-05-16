#include <iostream>
#include <queue>

using namespace std;

int n,m;
int map[200][200];

//�����¿� ��ǥ 
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
    

int bfs(int x, int y){
    
     queue<pair<int, int> > q;
     q.push(pair<int,int>(x,y)); //ť�� ������ �� �ֱ� 
    
    // ť�� �� ������ �ݺ�
    while(!q.empty()){
       int currentX = q.front().first; // ���� x��ġ 
       int currentY = q.front().second; // ���� yȮ�� 
       
       q.pop(); // ť���� ���� 
       // ���� ��ġ���� �����¿� ���������� ��ġ Ȯ��
        for(int i = 0; i < 4; i++){
            int nx = currentX + dx[i];
            int ny = currentY + dy[i];
            
             //�־��� ������ ����� ���� 
            if(nx >= n || nx <= -1 || ny >= m || ny <= -1)
                continue;
            
            // �ش� ��带 ó�� �湮�ϴ� ��쿡�� �ִ� �Ÿ� ���(0�̰ų� �̹� �湮�� ���� ����) 
            if(map[nx][ny] == 1){
                map[nx][ny] = map[currentX][currentY] + 1;
                q.push(pair<int,int>(nx,ny)); 
            }
        }
    }
    
    return map[n-1][m-1];
}

int main(void)
{
    cin >> n >> m; // ������ �������� N, M�� �ޱ� 
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%1d", &map[i][j]); // ���� ���� ���� �Է� �ޱ� 
        }
    }

     // ó�� ��ġ���� BFS�� ������ ��� ��� 
    cout << bfs(0, 0);

}
