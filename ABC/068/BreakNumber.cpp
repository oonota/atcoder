#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;

	int div_num = 0;
	int large = 0;
	
	for(int i=1;i<=N;++i){
		int number = i;
		int flag = 1;
		int div = 0;

		while(flag == 1){
			if((number%2)==0){
				div++;
				number /= 2;
			}else{
				flag = 0;
			}
		}

		if(div > div_num){
			div_num = div;
			large = i;
		}

	}

	print(large);

	return 0;

}
