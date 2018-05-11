#include<iostream>

#define print(x) std::cout << x << std::endl

int main(void){

	int X,A,B;

	std::cin >> X >> A >> B;
	print((X-A)-B*((X-A)/B));


	return 0;

}
