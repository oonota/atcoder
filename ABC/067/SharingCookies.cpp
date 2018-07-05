#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int A,B;
	std::cin >> A >> B;

  bool a = A%3;
	bool b = B%3;
	bool ab = (A+B)%3;

	if(a == 0 || b == 0 || ab == 0)
		print("Possible");
	else
		print("Impossible");

	return 0;

}
