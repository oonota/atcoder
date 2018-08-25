#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int H,W;
	std::cin >> H >> W;

	std::vector<std::string> a;
	std::string dummy;
	for(int i=0;i<H;++i){
		std::cin >> dummy;
		a.push_back(dummy);
	}

	int row[H] = {0};
	int col[W] = {0};
	for(int i=0;i<H;++i){
		for(int j=0;j<W;++j){
			if(a[i][j] == '#'){
				row[i] = 1;
				col[j] = 1;
			}
		}
	}


	for(int i=0;i<H;++i){
		int kaigyou = 0;
		for(int j=0;j<W;++j){
			if(row[i] == 1 && col[j] == 1){
				std::cout << a[i][j];
				kaigyou = 1;
			}
		}
		if(kaigyou == 1) std::cout << std::endl;
	}
	// std::string white(W,'.');
	// for(int i=0;i<a.size();++i){
	// 	if(white == a[i]){
	// 		a.erase(a.begin()+i);
	// 		i--;
	// 	}
	// }
	// std::cout << std::endl;
	//
	// for(int i=0;i<a.size();++i){
	// 	print(a[i]);
	//
	// }



	return 0;
}
