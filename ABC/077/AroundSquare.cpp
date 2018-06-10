#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;

	int i;
	for(i=1;i*i<=N;++i);
	print((i-1)*(i-1));


	return 0;
}
