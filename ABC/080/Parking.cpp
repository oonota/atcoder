#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N,A,B;
	std::cin >> N >> A >> B;

	int min;

	min = N*A>B?B:N*A;
	print(min);

	return 0;

}
