#include <bits/stdc++.h>
#include <stdio.h>

int main(void){

	int H,W;
	std::cin >> H >> W;

	std::vector<std::string> S;
	std::string dummy;
	for(int i=0;i<H;i++){
		std::cin >> dummy;
		S.push_back(dummy);
	}

	for(int i=0;i<H;++i){
		for(int j=0;j<W;++j){
			if(S[i][j] == '.'){
				int count = 0;
				for(int a=i-1;a<i-1+3;++a){
					for(int b=j-1;b<j-1+3;++b){
						if(a > -1 && a < H && b > -1 &&  b < W){
							if(S[a][b] == '#') count++;
						}
					}
				}
				S[i][j]  = '0' + count;

			}

		}

	}
	for(int i=0;i<H;i++){
		std::cout << S[i] << std::endl;
	}


	return 0;
}
