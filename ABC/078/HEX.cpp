#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	char X,Y;
	std::cin >> X >> Y;

	if(X<Y){
		print('<');
	}else if(X>Y){
		print('>');
	}else{
		print('=');
	}

	return 0;
}
