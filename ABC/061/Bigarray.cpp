#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N,K;
	std::cin >> N >> K;

	std::vector<int> a(N,0);
	std::vector<int> b(N,0);
	for(int i=0;i<N;++i)
		std::cin >> a[i] >> b[i];

	int number = 0;
	for(int i=0;i<N;++i){
		number += b[i];
		if(number >= K){
			print(a[i]);
			break;
		}
	}

	return 0;

}
