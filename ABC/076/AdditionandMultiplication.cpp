#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N,K;
	std::cin >> N;
	std::cin >> K;

	int sum = 1;
	for(int i=0;i<N;++i){
		if(sum<K){
			sum *= 2;
		}else{
			sum += K;
		}
	}

	print(sum);

	return 0;
}
