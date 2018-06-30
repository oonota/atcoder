#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	std::string s;
	std::cin >> s;

	int count = 0;
	for(int i=0;i<s.size();++i)	
		s[i]=='+'?count++:count--;

	print(count);

	return 0;
}
