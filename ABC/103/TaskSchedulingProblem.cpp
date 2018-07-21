#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	std::vector<int> A(3,0);
	std::cin >> A[0]  >> A[1] >> A[2];

	std::sort(A.begin(),A.end());
	
	int sum = 0;
	sum += std::abs(A[2]-A[1]);
	sum += std::abs(A[1]-A[0]);

	print(sum);

	


	return 0;
}
