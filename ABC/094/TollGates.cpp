#include<iostream>
#include<stdlib.h>
#include<string>

int main(void){

	int N,M,X;
	int *a;
	int *road;
	std::string line;
	std::string num;
	int j = 0;
	int middle;

	std::cin >> N >> M >> X;
	std::cin.ignore();


	a = (int *)calloc(M,sizeof(int *));
	road = (int *)calloc(N+1,sizeof(int *));

	std::getline(std::cin,line);
	for(int i=0;i<M;i++){
		num = "";
		for(;j<line.size()&&line[j] != ' ';j++){
			num.push_back(line[j]);
		}
		j++;
		a[i] = std::stoi(num);	
	}

	for(int i=0;i<M;i++){
    road[a[i]]++;	
	}

	int low = 0;
	int high = 0;

	for(int i=X-1;i>0;i--){
	low += road[i];
	}
	for(int i=X+1;i<N+1;i++){
	high += road[i];
	}





	if(low < high){
		std::cout << low << std::endl;
	}else{
		std::cout << high << std::endl;
	}	





	return 0;



}
