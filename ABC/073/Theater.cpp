#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;

	std::vector<int> l(N,0);
	std::vector<int> r(N,0);
	for(int i=0;i<N;++i)
		std::cin >> l[i] >> r[i];

	int count = 0;
	for(int i=0;i<N;++i)
			count += r[i] - l[i] + 1;

	print(count);
	return 0;
}
