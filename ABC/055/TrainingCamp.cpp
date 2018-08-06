#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;

	long long int power = 1;
	for(int i=0;i<N;++i)
		power = (power*(i+1))%(int)(pow(10,9)+7);

	print(power);
	return 0;
}
