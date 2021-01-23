#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std; 

int N, M, K; 
vector<int> v; 
int sum = 0; 
 
int main() { 
    
     // N, M, K를 공백을 기준으로 구분하여 입력 받기 
     cin >> N >> M >> K; 
 
     for (int i = 0; i < N; i++) { 
         int x; 
         cin >> x; 
         v.push_back(x); 
     } 
 
 
     sort(v.begin(), v.end()); // 입력 받은 수들 정렬 
     int firstMax = v[N - 1]; // 가장 큰 수 
     int secondMax = v[N - 2]; // 두 번째로 큰 수 
 
 
     // 가장 큰 수가 더해지는 횟수 계산 
     int count = (M / (K + 1)) * K; 
     count += M % (K + 1); 
 
    
     sum += count * firstMax; // 가장 큰 수 더하기 
     sum += (M - count) * secondMax; // 두 번째로 큰 수 더하기 
 
 
     cout << sum;
 } 



