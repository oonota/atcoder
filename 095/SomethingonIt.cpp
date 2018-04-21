#include<iostream>

#define RAMEN 700
#define TOPIN 100
#define N 3

int main(void){

	char str[N];
	int n=0;

	std::cin >> str;

	for(int i=0;i<N;i++){
	if(str[i] == 'o') n++;
	}

	std::cout << RAMEN + TOPIN*n << std::endl; 

	return 0;



}
