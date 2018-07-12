#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;

	std::vector<int> a(N,0);
	for(int i=0;i<N;++i)
		std::cin >> a[i];

	std::sort(a.begin(),a.end());
	print(a.back()-a.front());

	return 0;

}
