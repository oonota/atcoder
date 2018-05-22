#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;
	N -= 1;

	std::vector<int> C(N,0);
	std::vector<int> S(N,0);
	std::vector<int> F(N,0);
	for(int i=0;i<N;++i)
		std::cin >> C[i] >> S[i] >> F[i];


	int time;
	for(int i=0;i<N;++i){
		time = S[i];
		for(int j=i;j<N;++j){
			if (time < S[j]){
				time += (S[j] - time);
			}
			if( (time%F[j]) == 0 ){
			}
			else{
				time +=	(F[j] - ((time+1) % F[j])) + 1; 
			}
			time += C[j];
		}
		print(time);
	}
	print(0);



	return 0;

}
