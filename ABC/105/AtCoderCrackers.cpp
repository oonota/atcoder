#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

// # WA wakarann

int main(void){

	int n,k;
	std::cin >> n >> k;

	if(n%k == 0)
		print(0);
	else
		print(std::abs(n/k+(n%k)-n/k));

	return 0;
}
