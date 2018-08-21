#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	std::string s;
	std::cin >> s;

	for(int i=0;i<s.size();++i)
		if(s[i] == ',') s[i] = ' ';

	print(s);

	return 0;
}
