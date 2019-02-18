/*
The key : The Median Minimizes the Sum of Absolute Deviations (The  L1  Norm). 
we will proceed in the following steps. 
1. read values into array and sort it. 
2. can easily obtain median as floor(n/2)th element 
3.calculate Sum of Absolute Deviations.

Running time: O(nlogn) for sorting. 


關鍵: 中位數最小化絕對值差異的總和 (The  L1  Norm). 
解題有以下步驟
1.將數據讀入陣列
2.排序陣列以取得中位數floor(n/2)th element
3.用此中位數去計算與其他數字的絕對值和

時間複雜度: O(nlogn) for sorting. 


*/

#include <bits/stdc++.h> 
using namespace std;

int main(){

	
	int n; scanf("%d", &n); 
	for (int i = 0; i < n; ++i)
	{
		int len; scanf("%d", &len); 
		vector<int> v;
		for (int i = 0; i < len; ++i)
		{
			int x; scanf("%d", &x); 
			v.push_back(x); 
		}

		sort(v.begin(), v.end()); 
		int median = v[len/2]; 
		//calculate anser 
		int devaition = 0 ; 
		for (int i = 0; i < len; ++i)
		{
			devaition += abs(median-v[i]);
		}
		printf("%d\n", devaition);
	}

	return 0;
}
