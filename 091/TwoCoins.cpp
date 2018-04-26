#include<iostream>
#include<string>

#define print(x) std::cout << x << std::endl

int main(void){

	int A,B,C;
	std::string result;

	std::cin >> A >> B >> C;

	A+B>=C?result="Yes":result="No";

	print(result);
		
	return 0;

}
