#include <bits/stdc++.h> 
using namespace std;



int main(){


	
	int n; cin >> n; 
	string coutry, name; 
	map<string, int> m; 
	for (int i = 0; i < n; ++i)
	{
		cin >> coutry; 
		getline(cin, name); 
		if(m.find(coutry) == m.end()){
			m.insert(make_pair(coutry, 1));
		}
		else{
			m[coutry] ++; 
		}

	}

	for (auto i = m.begin(); i != m.end(); i++)
{
   cout << i->first <<" "<< i->second << endl;
}
	

	return 0;
}

