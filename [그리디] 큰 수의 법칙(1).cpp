#include <iostream>
using namespace std;

int main()
{
    int N, M, K, temp;
    int list[1000] = {0}; // N<= 1000 , 정적배열로 선언한 뒤, 0으로 초기화
    int count = 0; // K번 구하기 위한 변수 
    int sum = 0; // 결과 
    cin>>N>>M>>K;
    
    //N개 자연수 입력을 배열로 받기 
    for(int i=0; i<N; i++){
        cin >> list[i];
    }

    //내림차순 정렬 
    for(int i=0; i<N-1; i++){
       for(int j=i+1; j<N; j++){
           if(list[i] < list[j]){ // Max값 찾기 
               temp = list[j];
               list[j] = list[i];
               list[i] = temp;
           }
       }
    }

    //가장 큰 수 구하는 과정 
    for(int i=0; i<M; i++){
        if(count < K){ // K번까지 더하기  
            sum += list[0]; //첫번째 큰 수 
            count += 1;
            
        }
        else{
            sum += list[1]; //두번째 큰 수 
            count = 0; // count 초기화 
        }
    }
    
    cout<< sum; //결과 출력 
    return 0;
}



