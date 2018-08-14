#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int A,B,C,D;
	std::cin >> A >> B >> C >> D;

	int product;
	product = A*B>=C*D?A*B:C*D;

	print(product);

	return 0;
}
