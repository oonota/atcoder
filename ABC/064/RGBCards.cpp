#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int r,g,b;
	std::cin >> r >> g >> b;

	int integer = r*100+g*10+b;

	std::string baisu = integer%4?"NO":"YES";
	print(baisu);



	return 0;

}
