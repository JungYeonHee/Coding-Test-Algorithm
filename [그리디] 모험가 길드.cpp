#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
   int n,x;
   vector<int> v; 
   int count = 0; // �� �׷� �� 
   int member = 0; // ���� �׷쿡 �߰��� ���谡�� �� 
   
   cin>>n;
   
   for(int i=0; i<n; i++){
       cin>>x;
       v.push_back(x); // vector�� x�� �߰� 
   }
   
   sort(v.begin(), v.end()); //�������� ����  
   
   for(int i=0; i<v.size(); i++){ //���� �ͺ��� Ȯ�� 
       member++; // �׷� ���� 
       if(member>=v[i]){ //���� �׷쿡 ���Ե� ���谡�� ���� ������ ������ �̻��̶��, �׷� �Ἲ 
            count++; // �� �׷� �� ����
            member = 0; // ���� �׷쿡 ���Ե� ���谡�� �� �ʱ�ȭ 
       }   
    }
   
    cout<<count;
  
    return 0;
}


