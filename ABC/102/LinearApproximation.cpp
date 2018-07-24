#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

//osii

int sorrow(int b,std::vector<int> A);

int main(void){

  int N;
	std::cin >> N;
	
	std::vector<int> A(N,0);
	for(int i=0;i<N;++i)
		std::cin >> A[i];

	int b = 0;	
	for(int i=0;i<N;++i){
		b += (A[i] - (i+1));
	}

	print(sorrow(b/N,A));


	return 0;

}

int sorrow(int b,std::vector<int> A)
{
		int N = A.size();
		int sum = 0;

		for(int i=0;i<N;++i)
			sum += std::abs(A[i]-(b+i+1));

		return sum;
}
