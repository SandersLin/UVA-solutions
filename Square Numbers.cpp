 #include <bits/stdc++.h> 
using namespace std;



int main(){

	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
	// memo all sqauyares uo to limit . we will try brute force fisrts 
	int a, b; 
	while(true){
		cin >> a >> b; 
		if(a==0 && b ==0){
			break;
		}
		if(a > b){
			int tmp = a; 
			a = b; 
			b = tmp; 
		}
		int ans = 0; 
		for (int i = a; i <= b; ++i)
		{
			int root = sqrt(i);
			if(root*root==i){
				ans++; 
			} 
		}
		cout << ans << endl; ; 
	}
	return 0;
}

