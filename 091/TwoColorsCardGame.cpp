#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

#define print(x) std::cout << x << std::endl

int main(void){

	int N,M;
	int i,j;
	std::string dummy;

	//input
	std::cin >> N;
	std::vector<std::string> s;

	for(i=0;i<N;i++){
		std::cin >> dummy;	
		s.push_back(dummy);
	}
	std::vector<std::string> unique(s);

	std::cin >> M;
	std::vector<std::string> t;

	for(i=0;i<M;i++){
		std::cin >> dummy;	
		t.push_back(dummy);
	}
	unique.insert(unique.end(),t.begin(),t.end());


	//processing
	std::sort(unique.begin(),unique.end());
	for(i=1;i<unique.size();i++){
		if(unique[i-1]==unique[i])	unique.erase(unique.begin() +i--);
	}
	unique.push_back(unique[i]+'a');
	std::vector<int> count(unique.size(),0);


	for(i=0;i<unique.size();i++){
		for(j=0;j<s.size();j++)
			if(unique[i] == s[j]) count[i]++;

		for(j=0;j<t.size();j++)
			if(unique[i] == t[j]) count[i]--;

	}

	std::sort(count.begin(),count.end());
	print(count.back());

	return 0;

}
