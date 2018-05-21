#include<bits/stdc++.h>
#include <cctype>

#define print(x) std::cout << x << std::endl

int main(void){

	int A,B;
	std::string S;
	std::cin >> A >> B;

	std::cin >> S;


	if(S.size() != (A+B+1)){
		print("No");
		return 0;
	}

	int i;
	for(i=0;i<A;i++){
		if(!std::isdigit(S[i])){
			print("No");
			return 0;

		}
	}
	if(S[i++] != '-'){
		print("No");
		return 0;
	}


	for(;i<B;i++){
		if(!std::isdigit(S[i])){
			print("No");
			return 0;

		}
	}

	print("Yes");
	return 0;

}
