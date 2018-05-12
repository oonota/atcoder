#include <iostream>
//#include <math.h>

#define print(x) std::cout << x << std::endl

int main(void)
{
	int a,b,c,d;

	std::cin >> a >> b >> c >> d;
	bool check = std::abs(b-a) <= d && std::abs(c-b) <= d || std::abs(c-a) <= d;

	check?print("Yes"):print("No");


	return 0;
}
