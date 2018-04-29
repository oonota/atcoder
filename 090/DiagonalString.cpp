#include <iostream>
#include <string>

#define D 3

int main(void) {

	std::string input[D];

	for(int i=0;i<D;i++){
		std::cin >> input[i];
	}
	for(int i=0;i<D;i++){
	std::cout << input[i][i];
	}
	std::cout << std::endl;

	return 0;
}
