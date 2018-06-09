#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	std::string a,b;
	std::cin >> a;
	std::cin >> b;


	if(a[0] == b[2] && a[1] == b[1] && a[2] == b[0]) print("YES");
	else print("NO");


	return 0;
}
