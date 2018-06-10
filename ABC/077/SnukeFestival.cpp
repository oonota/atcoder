#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

/*
 TLE
 */

int main(void){

	int N;
	std::cin >> N;

	std::vector<int> A(N,0);
	std::vector<int> B(N,0);
	std::vector<int> C(N,0);

	for(int i=0;i<N;++i)
		std::cin >> A[i];
	for(int i=0;i<N;++i)
		std::cin >> B[i];
	for(int i=0;i<N;++i)
		std::cin >> C[i];

	int count = 0;
	for(int i=0;i<N;++i){
		for(int j=0;j<N;++j){
			for(int k=0;k<N;++k){
				if(A[i] < B[j] && B[j] < C[k])
					count++;
			}
		}
	}

	print(count);



	return 0;
}
