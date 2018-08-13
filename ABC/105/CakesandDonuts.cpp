#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;

	if(N<7 && N<4)
		print("No");
	else if(N%4==0 || N%7== 0)
		print("Yes");
	else


	return 0;
}
