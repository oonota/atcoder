#include<iostream>
#include<algorithm>
#include<vector>

#define print(x) std::cout << x << std::endl

#define D 2

int main(void){

	int N;
	int count;
	std::vector<int> input(N,0); 
	std::vector<std::vector<int>> red;
	std::vector<std::vector<int>> blue;


	std::cin >> N;

	for(int i=0;i<N;i++){
		std::cin >> input[0] >> input[1];
		//std::cin.ignore();
		red.push_back(input);

	}
	for(int i=0;i<N;i++){
		std::cin >> input[0] >> input[1];
		//std::cin.ignore();
		blue.push_back(input);
	}

	std::sort(red.begin(),red.end());
	std::sort(blue.begin(),blue.end());
	printf("\n");
	for(int i=0;i<N;i++){
		for(int j=0;j<D;j++){
			std::cout << (red[i][j]) << ' ';

		}
		std::cout << std::endl;
	}
	printf("\n");
	for(int i=0;i<N;i++){
		for(int j=0;j<D;j++){
			std::cout << (blue[i][j]) << ' ';

		}
		std::cout << std::endl;
	}
	count = 0;
	for(int i=0;i<N;i++){
		for(int j=0;j<blue.size();j++){
			if(red[i][0]<blue[j][0] && red[i][1]<blue[j][1]){
				blue.erase(blue.begin()+ j);
				count++;
				j = N;

			}	
		}
	}


	return 0;	


}
