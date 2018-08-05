#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int D,G;
	std::cin >> D >> G;

	std::vector<int> p(D,0);
	std::vector<int> c(D,0);
	for(int i=0;i<D;++i)
		std::cin >> p[i] >> c[i];

	std::vector<int> tokuten(D,0);
	for(int i=0;i<=D;++i){
		int ii = i+1; 
		tokuten[i] = 100*ii*p[i] + c[i];
	}
	for(int i=0;i<D;++i){
		if(tokuten[i] >= G){
			print(p[i]);
			break;
		}

	}



	return 0;
}
