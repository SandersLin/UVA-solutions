#include <bits/stdc++.h> 
using namespace std;

int main(){

	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
	
	unsigned long long a, b; 
	while(scanf("%llu %llu", &a, &b) != EOF) {
		printf("%llu\n",a>b? a-b : b-a );
	}
	
	return 0;
}




