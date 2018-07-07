#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){
	
	int a,b,c;
	std::cin >> a >> b >> c;

	int ab = a+b;
	int ac = a+c;
	int bc = b+c;

	int min = std::min({ab,ac,bc});
	print(min);

	return 0;
}
