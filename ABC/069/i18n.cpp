#include<bits/stdc++.h>

#define print(x) std::cout << x 

int main(void){

	std::string s;
	std::cin >> s;

	int count = 0;		
	for(int i=1;i<s.size()-1;++i)
		count++;

	print(s.front());
	print(count);
	print(s.back());
	print(std::endl);

	return 0;

}
