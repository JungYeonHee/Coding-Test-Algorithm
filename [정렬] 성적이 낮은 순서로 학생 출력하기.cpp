#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//�������� ���� �� ���� �Լ�   
bool compare(pair<string, int> a, pair<string, int> b ){
	return a.second < b.second;
}

int main(void){
	
	int n;
	
	cin >> n;
	
	vector<pair<string, int> > v; //vector�� pair Ÿ������ ����  
	
	for(int i = 0; i < n; i ++){
		string name;
		int score;
		
		cin >> name >> score; //������ �������� �� �ޱ�  
		// make_pair�� �̿��� assign�ϴ� ���, �� �Լ����� ���ڸ� �ѱ�� �Ϲ��� ��ȯ�� �ȴٰ� �Ѵ�.	
		v.push_back(make_pair(name, score)); 
	}
	
	sort(v.begin() , v.end(), compare); // �������� ����  
	
	for(int i = 0; i < v.size(); i++){
		cout << v[i].first << " " ; // ������ ������ ���� �̸��� ���  
	}
	
}
