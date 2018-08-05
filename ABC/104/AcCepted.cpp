#include <bits/stdc++.h>
#include <ctype.h>

#define print(x) std::cout << x << std::endl

int main(void){

	std::string S;
	std::cin >> S;

	int flag = 0;
	int c_num = 0;
	if(S[0] == 'A' && islower(S[1]) != 0 ){


		for(int i=2;i<S.size()-1;++i){
			if(S[i] == 'C'){
				c_num++;
			}

			else{
				if(islower(S[i]) == 0){
					print("WA");
					exit(0);
				}
			}

		}
	}else{
		flag = 1;
		print("WA");
		exit(0);
	}
	if(c_num != 1 || islower(S[S.size()-1]) == 0){
		print("WA");
	}
	else if(flag == 0)
		print("AC");

	return 0;
}
