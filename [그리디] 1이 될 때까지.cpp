#include <iostream>
using namespace std;

int main()
{
   int n,k;
   cin>>n>>k;
   
   int cnt = 0; //���� Ƚ�� 
   
   while(n != 1){
       if(n % k == 0){ // n�� k�� ������ ������ ��� 
           n = n/k;
       }
       else{ // n�� k�� ������ �������� �ʴ� ��� 
           n = n-1;
       }
       
       cnt += 1;
   }
   
   cout<< cnt;
    
    return 0;
}


