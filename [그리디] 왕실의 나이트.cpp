#include<iostream>
using namespace std;

int main(void){
	
	string str = "";
	cin >> str;
	
	int row = str[1] - '0';
	int col = (str[0] - 'a') + 1;
	
	
	int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2 };
	int dy[8] = {-1, 1, 2, -2, 2, -2, 1, -1 };
	
	int count = 0; // 경우의 수  
	
	for(int i=0; i<8; i++){
		int rowNext = row + dx[i];
		int colNext = col + dy[i];
			
		if(rowNext >= 1 && rowNext <= 8 && colNext >= 1 && colNext <= 8 ){
			count += 1;
		}
		
	}
	
	cout << count ;
	
}
