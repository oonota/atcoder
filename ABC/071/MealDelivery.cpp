#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int x,a,b;
	std::cin >> x >> a >> b;

	std::abs(x-a)>std::abs(x-b)?print('B'):print('A');

	return 0;
}
