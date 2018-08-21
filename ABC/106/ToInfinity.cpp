#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	std::string S;
	std::cin >> S;
	int k;
	std::cin >> k;

	int one_flag = 0;
	char c = 0;
	for(int i=0;i<k;++i){
		if(S[i] == '1')	one_flag++;
		else if(c == 0){ 
			c = S[i];
			break;
		}
	}
	if(one_flag == k){
		print('1');
	}
	else
		print(c);

	return 0;

}
