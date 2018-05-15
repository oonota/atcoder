#include<iostream>
#include<string>
#include<math.h>

#define print(x) std::cout << x << std::endl

int main(void){

	std::string input;
	std::string result;
	int a_b;
	int sq;
	int i;

	std::getline(std::cin,input);
	for(i=0;input[i]!=' ';i++);
	input.erase(input.begin()+i);

	a_b = std::stoi(input);
	sq = (int)sqrt(a_b);
	result = sq*sq == a_b?"Yes":"No";

	print(result);

	return 0;

}
