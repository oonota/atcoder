#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N,A,B;

	std::cin >> N >> A >> B;

	int p;
	int keta;
	int sum = 0;
	for(int i=0;i<=N;++i){
		p = i;
		keta = 0;
		while(p>0){
			keta += p % 10;
			p /= 10;
		}
		if(A <= keta && keta <= B){
			sum += i;
		}
	}
	print(sum);


	return 0;
}
