#include <iostream>
#include <vector>
#include <algorithm>

int main(void){

	std::vector<int> input(3,0);
	int K;

	std::cin >> input[0] >> input[1] >> input[2];
	std::cin >> K;

	std::sort(input.begin(),input.end());
	for(int i=0;i<K;i++)
		input[2] *= 2;

	std::cout << input[0]+input[1]+input[2]	 << std::endl;

	return 0;
}
