#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N; std::cin >> N;

	int count = 0;
	for(int i=1;i<=N;i+=2){
		int divisor_count = 0;
		for(int j=1;j<=i;++j){
			if(i%j == 0)
				divisor_count++;
		}
		if(divisor_count == 8)
			count++;
	}

	print(count);


	return 0;
}
