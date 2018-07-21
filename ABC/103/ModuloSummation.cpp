#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

//dekitenai

int main(void){

	int N;
	std::cin >> N;

	std::vector<int> a(N,0);
	for(int i=0;i<N;++i)
		std::cin >> a[i];

	std::sort(a.begin(),a.end());
	int big = a[N-1]-1;
	int flag = 0;
	int f = 0;
	int m = 0;
	for(int i=0;flag<3;i++){
		flag = 0;
		f = 0;
		m += big;
		//print(m);
		for(int j=0;j<N;j++){
			if(m%a[j]==a[j]-1){
				flag++;
			}
			f += m%a[j];
		}

	}
	print(f);


	return 0;
}
