#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;

	int digit_sum = 0;
	int n = N;
	while(N>0){
		digit_sum += (N%10);
		N /= 10;
	}

	int amari = (n % digit_sum);
	if(amari == 0){
		print("Yes");
	}else{
		print("No");
	}

	return 0;
}
