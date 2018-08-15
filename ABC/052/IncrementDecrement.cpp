#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::string s;
	std::cin >> N;
	std::cin >> s;

	int count = 0;
	std::vector<int> count_vec(N+1,0);
	count_vec[0] = count;
	for(int i=0;i<N;++i){
		if(s[i] == 'I') count++;
		else count--;
		count_vec[i+1] = count;
	}
	std::sort(count_vec.begin(),count_vec.end());
	print(count_vec.back());

	return 0;
}
