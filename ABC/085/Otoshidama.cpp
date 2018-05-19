#include <bits/stdc++.h>

#define print(x,y,z) std::cout << x << ' '<< y << ' '<< z << std::endl

void solve(int N,int Y);

int main(void){

	int N,Y;

	std::cin >> N >> Y;

	solve(N,Y);



	return 0;
}
void solve(int N,int Y)
{
	int money[3] = {0};
	while(N--){
		if(Y/10000){
			Y -= 10000;
			money[0]++;
		}else if(Y/5000){
			Y -= 5000;
			money[1]++;
		}else if(Y/1000){
			Y -= 1000;
			money[2]++;
		}
	}
	if(Y == 0){
		for(int i=0;i<3;i++){
			std::cout << money[i] << ' ';
		}
		std::cout << std::endl;
	}else{
		for(int i=0;i<3;i++){
			std::cout << -1 << ' ';
		}
		std::cout << std::endl;
	}




}
