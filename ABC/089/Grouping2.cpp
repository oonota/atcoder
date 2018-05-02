#include<iostream>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	int count;

	std::cin >> N;

	for(count=0;N>2;count++)
		N -= 3;

	print(count);



	return 0;

}
