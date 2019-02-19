#include <bits/stdc++.h> 
using namespace std;

void sumdigit(string& s){
	int sum = 0; 
	for (int i = 0; i < s.length(); ++i)
	{
		sum += int(s[i]-'0');   
	}
	s = to_string(sum); 
}

int main(){

	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
	

	string s; 
	while(true){
		getline(cin, s);
		if( s == "0"){
			break;
		}
		while(s.length() > 1){
			sumdigit(s); 
		}
		cout << s << endl; 
	}


	
	

	return 0;
}

