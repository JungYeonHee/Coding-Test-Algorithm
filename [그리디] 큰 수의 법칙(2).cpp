#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std; 

int N, M, K; 
vector<int> v; 
int sum = 0; 
 
int main() { 
    
     // N, M, K�� ������ �������� �����Ͽ� �Է� �ޱ� 
     cin >> N >> M >> K; 
 
     for (int i = 0; i < N; i++) { 
         int x; 
         cin >> x; 
         v.push_back(x); 
     } 
 
 
     sort(v.begin(), v.end()); // �Է� ���� ���� ���� 
     int firstMax = v[N - 1]; // ���� ū �� 
     int secondMax = v[N - 2]; // �� ��°�� ū �� 
 
 
     // ���� ū ���� �������� Ƚ�� ��� 
     int count = (M / (K + 1)) * K; 
     count += M % (K + 1); 
 
    
     sum += count * firstMax; // ���� ū �� ���ϱ� 
     sum += (M - count) * secondMax; // �� ��°�� ū �� ���ϱ� 
 
 
     cout << sum;
 } 



