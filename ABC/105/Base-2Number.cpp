#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

// totyuu

int main(void){

	int N; std::cin >> N;

	std::vector<int> base;
	while(N>0){
		base.push_back(N%2);
		N /= -2;
	}

	for(int i=0;i<base.size();++i){
		std::cout << base[base.size()-i];
	}
	std::cout << std::endl;

	return 0;
}
