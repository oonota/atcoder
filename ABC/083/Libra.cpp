#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int A,B,C,D;
	int L,R;

	std::cin >> A >> B >> C >> D;
	L = A+B;
	R = C+D;

	if(L>R){
		print("Left");
	}else if(R>L){
		print("Right");
	}else{
		print("Balanced");
	}


	return 0;

}
