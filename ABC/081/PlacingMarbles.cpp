#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	std::string input;
	std::cin >> input;

	int count = 0;
	for(int i=0;i<3;++i)
		if(input[i] == '1') count++;

	print(count);
	return 0;

}
