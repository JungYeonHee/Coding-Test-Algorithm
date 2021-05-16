#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
   int n,x;
   vector<int> v; 
   int count = 0; // 총 그룹 수 
   int member = 0; // 현재 그룹에 추가된 모험가의 수 
   
   cin>>n;
   
   for(int i=0; i<n; i++){
       cin>>x;
       v.push_back(x); // vector에 x값 추가 
   }
   
   sort(v.begin(), v.end()); //오름차순 정렬  
   
   for(int i=0; i<v.size(); i++){ //낮은 것부터 확인 
       member++; // 그룹 생성 
       if(member>=v[i]){ //현재 그룹에 포함된 모험가의 수가 현재의 공포도 이상이라면, 그룹 결성 
            count++; // 총 그룹 수 증가
            member = 0; // 현재 그룹에 포함된 모험가의 수 초기화 
       }   
    }
   
    cout<<count;
  
    return 0;
}


