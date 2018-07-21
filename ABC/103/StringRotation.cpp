#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

std::string rotate(std::string s);
int main(void){

	std::string s;	
	std::string t;	
	std::cin >> s;
	std::cin >> t;

	int s_size =  s.size();
	for(int i=0;i<s_size;++i){
		s = rotate(s);
		if(s == t){
			print("Yes");
			return 0;
		}

	}

	print("No");
	return 0;
}

std::string rotate(std::string s)
{

	int s_size = s.size();
	char c = s[s_size-1];

	for(int i=0;i<s_size-1;++i)
		s[s_size-1-i] = s[s_size-2-i];
	s[0] = c;

	return s;

}
