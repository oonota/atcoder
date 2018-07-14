#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	std::string S;
	std::cin >> S;

	int alpha[26] = {0};
	for(int i=0;i<S.size();++i)
		alpha[S[i]-'a']++;

	int flag = 0;
	for(int i=0;i<26;++i){
		if(alpha[i] > 1)
			flag = 1;

	}
	std::string result = flag?"no":"yes";
	print(result);

	return 0;
}
