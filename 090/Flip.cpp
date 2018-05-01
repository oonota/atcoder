#include<iostream>

#define print(x) std::cout << x << std::endl

int main(void){

	int N,M;
	int count;

	std::cin >> N >> M;

	int card[N+2][M+2];

	//init
	for(int i=0;i<N+2;i++){
		for(int j=0;j<M+2;j++){
			card[i][j] = 0;			
		}
	}

	for(int i=1;i<N+1;i++){
		for(int j=1;j<M+1;j++){
			for(int n=i-1;n<i+2;n++){
				for(int m=j-1;m<j+2;m++){
					card[n][m]++;			
				}
			}
		}
	}

	count = 0;
	for(int i=1;i<N+1;i++){
		for(int j=1;j<M+1;j++){
			if(card[i][j]%2) count++;
		}
	}

		print(count);


	return 0;

}
