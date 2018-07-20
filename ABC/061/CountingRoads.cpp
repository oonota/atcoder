#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N,M;
	std::cin >> N >> M;

	std::vector<int> a(M,0);
	std::vector<int> b(M,0);

	for(int i=0;i<M;++i)
		std::cin >> a[i] >> b[i];

	std::vector<int> count(N,0);
	for(int i=0;i<M;++i){
		count[a[i]-1]++;
		count[b[i]-1]++;
	}

	for(int i=0;i<N;++i)
		print(count[i]);


	return 0;

}
