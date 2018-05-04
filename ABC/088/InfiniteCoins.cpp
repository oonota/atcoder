#include<iostream>

#define print(x) std::cout << x << std::endl

int main(void){

		int N,A;
		

		std::cin >> N;
		std::cin >> A;

		N-500*(N/500)<=A?print("Yes"):print("No");

		return 0;
}
