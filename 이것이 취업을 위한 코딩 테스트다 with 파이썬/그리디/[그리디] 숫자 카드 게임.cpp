#include <iostream>
#include <algorithm>
using namespace std;

int N, M, x;
int result;


int main() {
   
    cin >> N >> M ; // 행의 개수, 열의 개수 입력받음 

    // 한 줄씩 입력 받기 
    for(int i=0; i<N; i++){
        int minNum = 10001; 
        // 순서대로 현재 줄에서 가장 작은 수 찾기 
        for(int j=0; j<M; j++){
            cin >> x; // 행렬에 들어가는 데이터 입력 
            minNum = min(minNum, x);
        }
        // 가장 작은 수들 중에서 가장 큰 수 찾기 
        result = max(result, minNum);
    }
    
    cout << result; 
   
}


