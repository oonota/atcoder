#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>

#define print(x) std::cout << x << std::endl

int main(void)
{
	int N;
	int sum;
	int i,j;

	std::cin >> N;
	std::vector<int> count;
	int map[2][N];

	for(int i=0;i<2;i++){
		for(int j=0;j<N;j++){
			scanf("%d",&map[i][j]);
		}
	}

	for(i=0;i<N;i++){
		sum = 0;
		for(j=0;j<N;j++){
			if(j<=i){
				sum += map[0][j];
			}
			else{
				sum += map[1][j];
			}
		}
		sum += map[1][i];
		count.push_back(sum);
	}
	std::sort(count.begin(),count.end());


	print(count.back());

	return 0;
}
