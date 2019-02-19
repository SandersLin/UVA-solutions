#include <bits/stdc++.h> 
using namespace std;

map<long long int, long long int> m; 

long long int getPathLength(long long int n){
	if(m.find(n)!= m.end()){
		return m[n]; 
	}
	else if(n==1){
		m.insert(make_pair(1,1)); 
		return 1; 
	}
	else{
		int next = 0; 
		if(n%2==0){
			next = n/2; 
		}
		else{
			next = 3*n+1; 
		}
		return 1+ getPathLength(next);
	}
}










int main(){

	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
	
	long long int a, b, start, end; 
	
	while(scanf("%lld %lld", &a, &b) != EOF){
		long long int ans =0 ; 
		if(a < b){
			start = a; 
			end = b; 
		}
		else{
			start =b; 
			end = a; 
		}

		for (int i = start; i <= end ; ++i)
		{
			ans = max(getPathLength(i),ans);
		}
		printf("%lld %lld %lld\n",a , b, ans );
	}
	
	
	

	return 0;
}

