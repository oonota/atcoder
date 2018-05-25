#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	long int X,Y;

	std::cin >> X >> Y;

	int i;
	for(i=1;i*X<Y;++i){
		print(i*X);

	}

	print(i-1);

	return 0;

}
