#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int a,b;
	std::cin >> a >> b; 

	int l = 0;
	int i;
	for(i=b-a;i>0;i--){
		l += i;
	}
	print(l-b);


	return 0;
}
