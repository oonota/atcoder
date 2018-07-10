#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;

	std::vector<int> a(N,0);
	for(int i=0;i<N;++i)
		std::cin >> a[i];

	int now = a[0];
	int count = 0;
	while(1){
		if(now == 2){
			print(count+1);
			break;
		}else{
			if(count == N){
				print(-1);
				break;
			}
			now = a[now-1];
			count++;
		}

	}


	return 0;

}
