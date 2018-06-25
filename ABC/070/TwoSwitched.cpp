#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int A,B,C,D;
	std::cin >> A >> B >> C >> D;

	if(B>C && D>B){
		print(B-C);
	}else if(C>A && B>D){
		print(D-C);
	}else{
		print(0);
	}

	return 0;

}
