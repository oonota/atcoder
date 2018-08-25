#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

// dekitenai
int main(void){

	int N,K;
	std::cin >> N >> K;

	std::vector<int> x(N,0);
	for(int i=0;i<N;++i){
		std::cin >> x[i];
	}

	int time = 0;

	int index = 0;
	int k = 0;
	//first nearest
	for(int i=1;i<(N-1);++i){
		if(std::abs(x[index]-0) > std::abs(x[i]-0)){
			index = i;
		}
	}
	k++;
	




	return 0;
}
