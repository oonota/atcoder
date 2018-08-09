#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

#wakarann

int main(void){

	int N,M;
	std::cin >> N >> M;
	
	std::vector<std::string> A;
	std::vector<std::string> B;
	std::string dummy;

	for(int i=0;i<N;++i){
		std::cin >> dummy;
		A[i] = dummy;
	}

	for(int i=0;i<M;++i){
		std::cin >> dummy;
		B[i] = dummy;
	}
	
	for(int i=0;i+M<N+1;++i){
			int flag = 0;
		for(int j=0;j+M<N+1;++j){
				if(A[i].substr(j,M) == B[i])
					flag++;
			}
		}
	}

	

	return 0;
}
