#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int A,B;
	std::cin >> A >> B;

	int AB = A+B;
	if(AB >= 10)	
		print("error");
	else
		print(A+B);


	return 0;

}
