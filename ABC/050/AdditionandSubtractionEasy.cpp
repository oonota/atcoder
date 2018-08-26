#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int A,B;
	char op;
	std::cin >> A >> op >> B;

	if(op == '+') print(A+B);
	else if(op == '-') print(A-B);

	return 0;
}
