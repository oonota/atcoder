#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

//wa

int main(void){

	std::string s;
	std::cin >> s;

	char alph[26] = {0};
	s.pop_back();
	int count = 1;
	int amari;
	while(1){
		std::map<char,int> mp;
		amari = 0;
		for(int i=0;i<s.size();++i)
			mp[s[i]]++;

		int map_num = 0;
		for(auto itr=mp.begin();itr!=mp.end();++itr){
			if(itr->second%2 == 0)
				amari++;
			map_num++;

		}
		if(amari == map_num){
			break;
		}
		s.pop_back();
		count++;

	}
//print(count);
	print(s.size());

	return 0;
}
