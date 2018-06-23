#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	std::string S;
	std::cin >> S;

	std::sort(S.begin(),S.end());
	S.erase(std::unique(S.begin(),S.end()),S.end());

	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for(int i=0;i<26;++i){
		if(S[i] != alphabet[i]){
			print(alphabet[i]);
			return 0;
		}
	}



	print("None");
	return 0;
}
