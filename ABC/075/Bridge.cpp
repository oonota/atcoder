#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl


int main(void){

	int N,M;
	std::cin >> N >> M;

	std::vector<int> a(M,0);
	std::vector<int> b(M,0);
	for(int i=0;i<M;++i)
		std::cin >> a[i] >> b[i];

	std::sort(a.begin(),a.end());
	a.erase(std::unique(a.begin(), a.end()), a.end());

	print(a.size());




	return 0;
}
