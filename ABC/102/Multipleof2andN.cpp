#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;

	if(N%2 == 0)
		print(N);
	else
		print(2*N);


	return 0;

}
