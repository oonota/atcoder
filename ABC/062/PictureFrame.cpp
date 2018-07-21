#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int H,W;
	std::cin >> H >> W;

	std::vector<std::string> s;
	std::string dummy;
	for(int i=0;i<H;++i){
		std::cin >> dummy;
		s.push_back(dummy);
	}

	for(int i=0;i<W+2;++i)
		std::cout << '#';
	std::cout << std::endl;

	for(int i=0;i<H;++i){
		s[i].insert(W,"#");
		s[i].insert(0,"#");
		print(s[i]);
	}
		



	for(int i=0;i<W+2;++i)
		std::cout << '#';
	std::cout << std::endl;


	return 0;

}
