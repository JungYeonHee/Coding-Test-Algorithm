#include<iostream>
using namespace std;

int n, m, x, y, direction;
int dMap[50][50]; // 방문한 위치를 저장하기 위한 맵을 생성하여 0으로 초기화
int arr[50][50]; //원본 맵 데이터 저장  
	
		// 북, 동, 남, 서   
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
	
void turnLeft() { //왼쪽으로 회전  
     direction -= 1; 
     if (direction == -1) 
	 	 direction = 3;  // 만약 다돌면 다시 서쪽을 보게함 
   
 } 

int main(void){
	
	cin>>n>>m; // 맵 크기  
	cin>>x>>y>>direction; // 게임 캐릭터가 있는 현재 좌표, 방향  
	
	dMap[x][y] = 1; // 현재 좌표 방문 처리  
		
	for(int i=0; i<n; i++){ // 맵 정보 입력  
		for(int j=0; j<m; j++){	
			cin>>arr[i][j];
		}
	}

	int count = 1; // 방문한 칸 수  
	int unaccept = 0; // 갈 수 없는 방향  
	while(true){
		//왼쪽으로 회전 
		turnLeft();  
		//왼쪽으로 한 칸 전진  
		int turnX = x + dx[direction]; //turnX에  x 이동좌표 저장
		int turnY = y + dy[direction]; //turnY에  y 이동좌표 저장
		
		// 회전한 이후 정면에 가보지 않은 칸이 존재하고 육지인 경우 이동
		if(dMap[turnX][turnY] == 0 && arr[turnX][turnY] == 0){
			dMap[turnX][turnY] = 1; //이동 좌표 방문 처리  
			//이동 좌표를 현재 좌표로 설정  
			x = turnX;  
			y = turnY;
			// 방문한 칸 수 증가  
			count += 1;
			unaccept = 0; // 갈 수 없는 방향 초기화  
			continue; 
		}// 회전한 이후 정면에 가보지 않은 칸이 없거나 바다인 경우  
		else{
			unaccept += 1; // 갈 수 없는 방향 증가  
		}
	
		// 네 방향 모두 갈 수 없는 경우
		if(unaccept == 4){
			//바라보는 방향 유지한 채 한칸 뒤로 가기  
			turnX = x - dx[direction]; // 이전 x좌표 가져오기
			turnY = y - dy[direction]; // 이전 y좌표 가져오기
			// 뒤로 갈 수 있다면 이동하기
			if(arr[turnX][turnY] == 0){
				x = turnX; 
				y = turnY;
			}else{	// 뒤가 바다로 막혀있는 경우 갈 수 없으므로 종료  
				break; 
			}
			unaccept = 0; //갈 수 없는 방향 초기화  
			
		}
	} 
	
	cout<<count;
	
}
