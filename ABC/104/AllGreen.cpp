#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int D,G;
	std::cin >> D >> G;

	std::vector<int> p(D,0);
	std::vector<int> c(D,0);
	for(int i=0;i<D;++i)
		std::cin >> p[i] >> c[i];

	int tokuten = 0;
	int item_num = 0;
	int min = 0;
	for(int i = 0; i < D; ++i){
		for(int j=0;j<p[i];++j){
			tokuten += 100*(i+1);
			item_num++;
		}
		tokuten += c[i];
		int single = 100*(i+1)*p[i] + c[i];
		if(tokuten >= G && single >= G){
			min = item_num<=p[i]?item_num:p[i];
			break;
		}else if(tokuten >= G){
			min = item_num;
			break;
		}
	}
	print(min);

	return 0;
}
