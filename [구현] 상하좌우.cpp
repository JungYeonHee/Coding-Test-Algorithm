#include<iostream>

using namespace std;

int main(void){
	
	int n;
	string plans;
	int x = 1, y = 1; //column, row 
	
	// L, R, U, D에 따른 이동 방향 
	char way[4] = {'L', 'R', 'U', 'D'};
	
	cin >> n;
	cin.ignore(); // '\n'을 만날 때까지 해당 길이를 무시  
	getline(cin, plans); // 한 줄에서 사용자가 엔터를 누르기 전까지의 값을 입력받는다.

	
	for(int i = 0; i< plans.size(); i++){ //이동 계획을 하나씩 확인  
		char plan = plans[i];
		
		if(plan == way[0] && y > 1){ //현재 y 위치가 1 보다 크다면, 왼쪽으로 한 칸 이동  
			y-=1;	
		}
		else if(plan == way[1] && y < n){ //현재 y 위치가 n 보다 작다면,  오른쪽으로 한 칸 이동
			y+=1;				
		}
		else if(plan == way[2] && x > 1 ){ //현재 x 위치가 1 보다 크다면, 위로 한 칸 이동
			x-=1;
		}
		else if(plan == way[3] && x < n ){//현재 x 위치가 n 보다 작다면, 아래로 한 칸 이동
			x+=1;
		}

	}

	cout << x << " " << y;
	
}
