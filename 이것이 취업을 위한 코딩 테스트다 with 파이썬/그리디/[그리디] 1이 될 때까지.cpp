#include <iostream>
using namespace std;

int main()
{
   int n,k;
   cin>>n>>k;
   
   int cnt = 0; //연산 횟수 
   
   while(n != 1){
       if(n % k == 0){ // n이 k로 나누어 떨어질 경우 
           n = n/k;
       }
       else{ // n이 k로 나누어 떨어지지 않는 경우 
           n = n-1;
       }
       
       cnt += 1;
   }
   
   cout<< cnt;
    
    return 0;
}


