#include <iostream>
#include <algorithm>
using namespace std;

int N, M, x;
int result;


int main() {
   
    cin >> N >> M ; // ���� ����, ���� ���� �Է¹��� 

    // �� �پ� �Է� �ޱ� 
    for(int i=0; i<N; i++){
        int minNum = 10001; 
        // ������� ���� �ٿ��� ���� ���� �� ã�� 
        for(int j=0; j<M; j++){
            cin >> x; // ��Ŀ� ���� ������ �Է� 
            minNum = min(minNum, x);
        }
        // ���� ���� ���� �߿��� ���� ū �� ã�� 
        result = max(result, minNum);
    }
    
    cout << result; 
   
}


