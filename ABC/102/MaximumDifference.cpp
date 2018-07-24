#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;

	std::vector<int> A(N,0);
	for(int i=0;i<N;++i)	
		std::cin >> A[i];

	std::sort(A.begin(),A.end());
	print(A.back()-A.front());

	return 0;

}
