#include<iostream>
#include<stdlib.h>
#include<string>

int main(void){

  int N,M,X;
	int *a;
	std::string line;
	std::string num;

	std::cin >> N >> M >> X;
	std::cin.ignore();


  a = (int *)calloc(M,sizeof(int *));

	std::getline(std::cin,line);
	for(int i=0;i<M;i++){
		a[i] = atoi(line[i]);
	}

	std::cout << N << std::endl;
	std::cout << M << std::endl;
	std::cout << X << std::endl;

	for(int i;i<M;i++){
		std::cout << a[i] << std::endl;
	}



	




	return 0;



}
