#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N; std::cin >> N;
	std::vector<int> T(N,0);
	for(int i=0;i<N;++i) std::cin >> T[i];

	int M; std::cin >> M;
	std::vector<int> P(M,0);
	std::vector<int> X(M,0);
	for(int i=0;i<M;++i) std::cin >> P[i] >> X[i];

	std::vector<int> dummy;
	for(int i=0;i<M;++i){
		dummy = T;
		dummy[P[i]-1] = X[i];
		print(std::accumulate(dummy.begin(), dummy.end(), 0));
	}




	return 0;
}
