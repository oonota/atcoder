#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;

	std::vector<int> d(N,0);
	for(int i=0;i<N;++i){
		std::cin >> d[i];
	}

	std::sort(d.begin(),d.end());
	for(int i=1;i<d.size();i++){
		if(d[i-1] == d[i]){
			d.erase(d.begin() +	i--);
		}
	}

	print(d.size());


	return 0;

}
