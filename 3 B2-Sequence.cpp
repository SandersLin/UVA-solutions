#include <bits/stdc++.h> 
using namespace std;



int main(){

	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
	

	int n; 
	int counter  =0; 
	while(cin >> n){

		counter ++; 
		set<int> s; 
		bool okay = true; 
		vector<int> v;
		for (int i = 0; i < n; ++i)
		{
			int tmp; cin >> tmp; 
			v.push_back(tmp); 
		}
		for (int i = 0; i < n; ++i)
		{
			//ahack 
			if(v[i] <1){
				okay = false; 
			}
			for (int j = i; j < n; ++j)
			{
				//ahck 
				if(v[j] < v[i]){
					okay =false; 
				}
				int diff = v[i] + v[j]; 
				

			
				if(s.find(diff) != s.end()){
					okay = false; 
					break; 
				}
				else{
					s.insert(diff);
			}
			}
		
	

		}
	
		cout << "Case #" << counter << ": It is"<<(okay?"":" not")<<" a B2-Sequence.\n"<<endl; 
		string foo; getline(cin, foo); 


	}
	

	return 0;
}

