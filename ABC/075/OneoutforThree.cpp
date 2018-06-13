#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int A,B,C;
	std::cin >> A >> B >> C;

	if(A == B)
		print(C);
	else if(B == C)
		print(A);
	else if(A == C)
		print(B);
	


	return 0;
}
