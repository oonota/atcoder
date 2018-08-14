#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	std::string s;
	std::cin >> s;

	int count = 0;
	int a_index = 0;
	int z_index = 0;
	for(int i=0;i<s.size();++i){
		if(s[i] == 'A'){ 
			a_index = i;
			break;
		}
	}

	for(int i=s.size();i>=0;--i){
		if(s[i] == 'Z'){
			z_index = i;
			break;
		}
	}

	print(z_index-a_index+1);


	return 0;
}
