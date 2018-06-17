#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;

	if(N/10 == 9 || N%10 == 9)
		print("Yes");
	else
		print("No");


	return 0;

}
