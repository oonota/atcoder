#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int X,A,B;
	std::cin >> X >> A >> B;

	int now = B - A;	

	if(now <= 0){
		print("delicious");
	}else if(now <= X){
		print("sefe");
	}else{
		print("dangerous");
	}


	return 0;

}
