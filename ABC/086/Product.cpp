#include<iostream>
#include<string>

#define print(x) std::cout << x << std::endl

int main(void){

	int a,b;
	std::string result;
	std::cin >> a >> b;

	result = a*b%2?"Odd":"Even";

	print(result);

	return 0;

}
