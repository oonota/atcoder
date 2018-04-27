#include<iostream>
#include<vector>
#include<algorithm>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	int input[2];
	std::vector<int> red;
	std::vector<int> blue;


	std::cin >> N;
	for(int i=0;i<N;i++){
		std::cin >> input[0] >> input[1];
		red.push_back(input);
	}
	for(int i=0;i<N;i++){
		std::cin >> input[0] >> input[1];
		//c.push_back(input[0]);
		//d.push_back(input[1]);
		//red.push_back({input[0],input[1]});
	}






	return 0;

}
