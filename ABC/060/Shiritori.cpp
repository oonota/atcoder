#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	std::string A;	
	std::string B;	
	std::string C;
	std::cin >> A >> B >> C;

	int A_size = A.size();
	int B_size = B.size();
	int C_size = C.size();

	bool AB = (A[A_size-1] == B[0]);
	bool BC = (B[B_size-1] == C[0]);

	if(AB == true && BC == true)
		print("YES");
	else
		print("NO");
	

	return 0;
}
