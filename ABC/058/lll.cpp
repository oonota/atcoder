#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

int a,b,c;
	std::cin >> a >> b >> c;

	int ba = b-a;
	int cb = c-b;
	std::string s = ba==cb?"YES":"NO";
	
	print(s);

	return 0;
}
