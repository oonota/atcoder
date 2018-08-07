#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int A,B;
	std::cin >> A >> B;

	A += A==1?14:0;
	B += B==1?14:0;

	if(A == B)
		print("Draw");
	else if(A<B)
		print("Bob");
	else if(B<A)
		print("Alice");

	return 0;
}
