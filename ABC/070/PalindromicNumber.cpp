#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

 int N;
 std::cin >> N; 

 if(N/100 == N%10)
	 print("Yes");
 else
	 print("No");

	return 0;
}
