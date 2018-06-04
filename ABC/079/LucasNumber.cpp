#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;

	 unsigned long long  L0 = 2;
	 unsigned long long  L1 = 1;
	 unsigned long long  Li;
	 unsigned long long  Li_1;
	 unsigned long long  Li_2;

	switch(N){
		case 0:
			print(L0);
			break;
		case 1:
			print(L1);
			break;
		default:
			Li_1 = L1;
			Li_2 = L0;
			unsigned long long tmp;
			for(int i=0;i<N-1;++i){
				Li = Li_1 + Li_2;
				tmp = Li_1;
				Li_1 = Li;
				Li_2 = tmp;
			}
			print(Li);
			break;

	}
	return 0;
}
