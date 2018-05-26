#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void)
{

	int N;
	std::string S;

	std::cin >> N;
	std::cin >> S;
	std::vector<int> count;
	char correct;
	int c;
	for(int i=0;i<N;i++){
		c = 0;
		correct = ' ';
		for(int j=0;j<N;j++){
			if(j<i){
				correct = 'E';
			}else if(j>i){
				correct = 'W';
			}
			if(S[j]==correct){

			}else if(S[j]!=correct && j != i){
				c++;

			}


		}
		count.push_back(c);
	}
	std::sort(count.begin(),count.end());
	print(count.front());


	return 0;
}
