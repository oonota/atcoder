#include<iostream>

#define print(x) std::cout << x << std::endl

int main(void){


	int a,b;
	int c;

	std::cin >> a >> b;

	c =	b>=a?a:a-1;

	print(c);


	return 0;

}
