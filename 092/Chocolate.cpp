#include<iostream>
#include<stdlib.h>

#define print(x) std::cout << x << std::endl
#define DAY(i,j) (j)*(A[i])+1

int main(void){

	int N,D,X;
	int *A;
	int count=0;
	int day=0;

	std::cin >> N;	
	std::cin.ignore();
	std::cin >> D >> X;
	std::cin.ignore();

	A = (int *)calloc(N,sizeof(int *));
	for(int i=0;i<N;i++){
		std::cin >> A[i];
		std::cin.ignore();
	}

	for(int i=0;i<N;i++){
		day = 1;
		for(int j=1;day<=D;j++){
			count++;
			day = DAY(i,j);
		}
	}
	count += X;

	print(count);

	return 0;

}
