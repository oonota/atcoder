#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

  std::string O;	
  std::string E;	
	std::cin >> O;
	std::cin >> E;

	std::string combined;

	int len = O.size()+E.size();
	for(int i=0;i<len;++i)
		if(i%2 == 0){
			combined.push_back(O[i/2]);
		}
		else{
			combined.push_back(E[i/2]);
		}
	print(combined);



	return 0;

}
