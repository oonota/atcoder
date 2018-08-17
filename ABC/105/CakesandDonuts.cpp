#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;

	for(int x=0;x<=(N/4);++x){
		for(int y=0;y<=(N/7);++y){
			if(4*x+7*y == N){
				print("Yes");
				return 0;
			}
		}
	}

	print("No");

	return 0;
}
