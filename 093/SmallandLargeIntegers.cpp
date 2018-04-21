#include<iostream>
#include<stdlib.h>

int main(void){

	int A,B,K;
	int l;
	int *count;

	std::cin >> A >> B >> K;

	l = B - A + 1;
	count = (int *)calloc(l,sizeof(int *));


	for(int i=0;i<K;i++){
		count[i]++;
		count[l-i-1]++;
	}

	for(int i=0;i<l;i++){
		if(count[i])
			std::cout << A+i << std::endl;
	}



}
