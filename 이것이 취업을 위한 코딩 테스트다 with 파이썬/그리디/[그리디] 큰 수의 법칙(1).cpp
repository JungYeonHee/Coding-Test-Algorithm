#include <iostream>
using namespace std;

int main()
{
    int N, M, K, temp;
    int list[1000] = {0}; // N<= 1000 , �����迭�� ������ ��, 0���� �ʱ�ȭ
    int count = 0; // K�� ���ϱ� ���� ���� 
    int sum = 0; // ��� 
    cin>>N>>M>>K;
    
    //N�� �ڿ��� �Է��� �迭�� �ޱ� 
    for(int i=0; i<N; i++){
        cin >> list[i];
    }

    //�������� ���� 
    for(int i=0; i<N-1; i++){
       for(int j=i+1; j<N; j++){
           if(list[i] < list[j]){ // Max�� ã�� 
               temp = list[j];
               list[j] = list[i];
               list[i] = temp;
           }
       }
    }

    //���� ū �� ���ϴ� ���� 
    for(int i=0; i<M; i++){
        if(count < K){ // K������ ���ϱ�  
            sum += list[0]; //ù��° ū �� 
            count += 1;
            
        }
        else{
            sum += list[1]; //�ι�° ū �� 
            count = 0; // count �ʱ�ȭ 
        }
    }
    
    cout<< sum; //��� ��� 
    return 0;
}



