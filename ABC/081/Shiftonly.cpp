#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;

	std::vector<int> A(N,0);
	for(int i=0;i<N;++i)
		std::cin >> A[i];

	int count;
	int flag = 1;
	for(count=0;1;count++){
		for(int j=0;j<N;++j){
			if(A[j]%2 == 1){
				flag = 0;
				j = N;
			}
		}
		if(flag){
			for(int j=0;j<N;++j){
				A[j] /= 2;
			}

		}else{
			break;
		}

	}
	print(count);

	return 0;

}
