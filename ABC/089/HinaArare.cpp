#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;		
	std::string S;
	std::vector<char> unique;
	std::string result;

	std::cin >> N;
	std::cin.ignore();
	std::getline(std::cin,S);


	while(S.size()>0){
		unique.push_back(S.back());
		S.pop_back();

		if(S.size()>0)
			S.pop_back();

	}

	std::sort(unique.begin(),unique.end());
	for(int i=1;i<unique.size();i++){
		if(unique[i-1] == unique[i]) unique.erase(unique.begin() + i--);
	}

	unique.size()==3?result="Three":result="Four";
	print(result);

	return 0;

}
