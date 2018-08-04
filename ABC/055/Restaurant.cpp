#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

  int N;
	std::cin >> N;

  int x = 800*N;
	int y = (N/15)*200;

	print(x-y);
	return 0;
}
