#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int D,N;
	std::cin >> D >> N;

	if(D == 0){
		print(N);
	}else{
		int hundred = 1;
		for(int i=0;i<D;++i)
			hundred *= 100;

		print(hundred*N);
	}
	return 0;
}
