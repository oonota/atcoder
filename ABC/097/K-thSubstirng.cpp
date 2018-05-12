#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define print(x) std::cout << x << std::endl


int main(void)
{

	int k;
	std::string s;
	std::vector<std::string> dic;

	std::cin >> s;
	std::cin >> k;

	for(int i=0;i<s.size();++i){
		dic.push_back(std::string() + s[i]);
	}
	for(int i=2;i<=s.size();i++){
		for(int j=0;j+i<=s.size();j++){
			dic.push_back(s.substr(j,i));

		}
	}

	std::sort(dic.begin(),dic.end());
	for(int j=1;j<dic.size();j++){
		if(dic[j-1] == dic[j]){
			dic.erase(dic.begin() + j--);
		}
	}


	print(dic[k-1]);





	return 0;
}
