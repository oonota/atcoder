#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int pow(int i,int n);

/*
 WA
 */


int main(void){

	int N;
	std::cin >> N; 

	int count=0;
	int i,j;
	int tmp;


	for(i=1;pow(9,i)<=N;++i);
	for(j=1;pow(6,j)<=N;++j);
	i--;
	j--;
	tmp = j>i?j:i;
	i = tmp;

	while(i > 0){
		int	pow_9 = pow(9,i);
		int	pow_6 = pow(6,i);
		if(N >= pow_9){
			N -= pow_9;
			count++;
		}

		if(N >= pow_6){
			N -= pow_6;
			count++;
		}
		if(N < pow_9 && N < pow_6){
			i--;
		}
	}

	if(N != 0){
		count += N;
	}
	print(count);

	return 0;
}
int pow(int i,int n){
	int result = 1;
	for(int j=1;j<=n;j++){
		result *= i;
	}

	return result;

}
