#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void)
{
	int A,B;

	std::cin >> A >> B;

	print(std::max({A+B,A-B,A*B}));
	return 0;
}
