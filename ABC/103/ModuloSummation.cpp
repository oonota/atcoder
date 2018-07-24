#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

//dekitenai

int main(void){

	int N;
	std::cin >> N;

	std::vector<int> a(N,0);
	for(int i=0;i<N;++i)
		std::cin >> a[i];

	int mod = 0;
	for(int i=0;i<N;++i)
		mod += a[i]-1;

	print(mod);


	return 0;
}
