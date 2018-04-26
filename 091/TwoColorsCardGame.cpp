#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

#define print(x) std::cout << x << std::endl

int main(void){

	int N,M;
	int i,j;
	std::string dummy;
	//	std::vector<std::string> unique_s;
	//	std::vector<std::string> unique_t;

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
	//	unique_t = t;

	//std::sort(unique_s.begin(),unique_s.end());
	//for(int i=1;i<unique_s.size();i++){
	//	if(unique_s[i-1]==unique_s[i]){
	//		unique_s.erase(unique_s.begin() +i);
	//		i--;
	//	}
	//}
	//std::sort(unique_t.begin(),unique_t.end());
	//for(int i=1;i<unique_t.size();i++){
	//	if(unique_t[i-1]==unique_t[i]){
	//		unique_t.erase(unique_t.begin() +i);
	//		i--;
	//	}
	//}
	//	for(int i=0;i<unique.size();i++){
	//		print(unique[i]);
	//
	//	
	std::sort(unique.begin(),unique.end());
	for(i=1;i<unique.size();i++){
		if(unique[i-1]==unique[i])	unique.erase(unique.begin() +i--);
	}
	unique.push_back(unique[i]+'a');
	std::vector<int> count(unique.size(),0);

	for(i=0;i<unique.size();i++){
		for(j=0;j<s.size();j++){
			if(unique[i] == s[j]) count[i]++;

		}
		for(j=0;j<t.size();j++)
			if(unique[i] == t[j]) count[i]--;

	}
	//	for(int i=0;i<unique.size();i++){
	//		print(unique[i]);
	//		print(count[i]);
	//	}
	std::sort(count.begin(),count.end());
	print(count.back());







	return 0;

}
