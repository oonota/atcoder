#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	std::string A;
	std::string B;
	std::cin >> A >> B;

	int num_A = A.size();
	int num_B = B.size();
	if(A == B)
		print("EQUAL");
	else if(num_A>num_B)
		print("GREATER");
	else if(num_A<num_B)
		print("LESS");
	else{ 
		for(int i=0;i<num_A;++i){
			if(A[i]>B[i]){
				print("GREATER");
				break;
			}
			else if(A[i]<B[i]){
				print("LESS");
				break;
			}
		}
	}


	return 0;
}
