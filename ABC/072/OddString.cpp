#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

 	std::string s;
	std::cin >> s;

	for(int i=0;i<s.size();++i){
		if((i+1)%2==1)
			std::cout << s[i];
	}
	std::cout << std::endl;

	return 0;
}
