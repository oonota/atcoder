#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

  int N,K;
	std::cin >> N >> K;

	std::vector<int> l(N,0);
	for(int i=0;i<N;++i)
		std::cin >> l[i];

	std::sort(l.begin(),l.end());
	
	int sum;
	for(int i=0;i<K;++i)
		sum += l[N-i-1];

	print(sum);
	return 0;

}
