#include <bits/stdc++.h>

#define print(x) std::cout << x 

int main(void){

	int sx,sy,tx,ty;
	std::cin >> sx >> sy >> tx >> ty;

	const int dx=tx-sx,dy=ty-sy;

	std::cout << std::string(dy,'U') << std::string(dx,'R');

	std::cout << std::string(dy,'D') << std::string(dx,'L');

	std::cout << 'L' << std::string(dy+1,'U') << std::string(dx+1,'R') << 'D';

	std::cout << 'R' << std::string(dy+1,'D') << std::string(dx+1,'L') << 'U';

	print(std::endl);

	return 0;
}
