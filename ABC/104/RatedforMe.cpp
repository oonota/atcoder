#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int R;
	std::cin >> R;

	if(R<1200)
		print("ABC");
	else if(R<2800)
		print("ARC");
	else
		print("AGC");

	return 0;
}
