#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int X,t;
	std::cin >> X >> t;

	int nokori = X>=t?X-t:0;
	print(nokori);


	return 0;

}
