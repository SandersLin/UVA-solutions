#include <bits/stdc++.h> 
using namespace std;



int main(){

	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
	

	int n; cin >> n;cin.ignore(256, '\n');
	map<char, int> m; 
	for (int i = 0; i < n; ++i)
	{
		string s; getline(cin, s);
	
		for (int i = 0; i < s.length(); ++i)
		{
			if(isalpha(s[i])){
				if(m.find(toupper(s[i]))== m.end()){
						m[toupper(s[i])] = 1; 
				}
				else{
					m[toupper(s[i])] ++; 
				}
			}
		}
	}


	//sort acccording to rule 
	vector<pair<char, int>> pairs; 
	for(auto i = m.begin(); i != m.end(); i++){
		pairs.push_back(*i); 
	}
	sort(pairs.begin(), pairs.end(), [=](pair<char,int>& a, pair<char,int>& b){
		if(a.second == b.second){
			return a.first < b.first; 
		}
		else{
			return a.second > b.second; 
		}
	});

	for (int i = 0; i < pairs.size(); ++i)
	{
		printf("%c %d\n",pairs[i].first, pairs[i].second );
	}



	
	

	return 0;
}

