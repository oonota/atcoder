#include<iostream>
#include<math.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	int *A;
	int fee;
	int previous;

	std::cin >> N;

	A = (int *)calloc(N,sizeof(int *));

	for(int i=0;i<N;i++){
		std::cin >> A[i];
	}

	for(int i=0;i<N;i++){
		fee = 0;
		previous = 0;
		for(int j=0;j<N;j++){
			if(i!=j){
				fee += abs(previous-A[j]);
				previous = A[j];
			}	
		}
		fee += abs(previous);
		print(fee);
	}


	free(A);

	return 0;

}
