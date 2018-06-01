#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;
	
	int keta = N;
	int keta_sum = 0;
	while(keta != 0){
		keta_sum += keta % 10;
		keta /= 10;
	}

	std::string result;
	result = N%keta_sum?"No":"Yes";
	print(result);
	return 0;

}
