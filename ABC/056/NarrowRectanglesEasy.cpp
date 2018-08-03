#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int W,a,b;
	std::cin >> W >> a >> b;

	int min = a>=b?b:a;
	int max = min==a?b:a;
	if(max<min+W)
		print(0);
	else
		print(max-(min+W));
	

	return 0;
}
