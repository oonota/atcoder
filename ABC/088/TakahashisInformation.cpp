#include<iostream>

#define print(x) std::cout << x << std::endl
#define ROW 3
#define COL 3

int main(void){

	int c[ROW][COL];

	for(int i=0;i<ROW;i++){
		for(int j=0;j<COL;j++){
			c[i][j] = 0;
		}
	}

	for(int i=0;i<ROW;i++){
		std::cin >> c[i][0] >> c[i][1] >> c[i][2];
	}

	for(int i=0;i<ROW;i++){
		for(int j=0;j<COL;j++){
			std::cout << (c[i][j]);
		}
		std::cout << std::endl;
	}


	return 0;

}
