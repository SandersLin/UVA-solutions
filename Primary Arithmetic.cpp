//a bit hacky, optimize later

#include <bits/stdc++.h> 
using namespace std;

int main(){

	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
	
	
	
	while(true){
		char tmp1[15], tmp2[15]; 
		int ans = 0, carry =0, result = 0; 
		scanf("%s %s", tmp1, tmp2); 
		string num1 = string(tmp1), num2 = string(tmp2);  

		if(num1 =="0" && num2 == "0" ){
			break; 
		}
		int len = max(num1.length(),num2.length());

		
		for (int i = 0; i < len; ++i)
		{
			int num1_int = 0, num2_int = 0; 
			if(i <= num1.length() -1 ){
				num1_int = int(num1[num1.length() - 1 - i] )- int('0');
			}
			if(i <= num2.length() -1 ){
				num2_int =  int(num2[num2.length() - 1 -i ]) - int('0');
			}
			

			result =  num1_int+ num2_int + carry; 
			
			if (result >= 10)
			{
				carry = 1;
				ans++; 
			}
			else{
				carry = 0; 
			}
		}
	
	

		if(ans==0){
			printf("%s\n","No carry operation." );
		}
		else if(ans ==1){
			printf("%d carry operation.\n", ans );
		}
		else{
			printf("%d carry operations.\n", ans );
		}
	}
	
	
	return 0;
}




