#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	long int X,Y;

	std::cin >> X >> Y;

	int i,j;
	int less,pre = 0;
	for(i=X;i<=Y;++i){
		less = 0;
		for(j=1;j<=X-1;++j){
			if(j*i<=Y){
				less++;

			}
		}

		print(less);
		if(less > pre){ 
			pre = less;
		}
	}

	print(pre);

	return 0;

}
