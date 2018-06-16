#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int check(std::vector<int> a);

int main(void){

	int N;
	std::cin >> N;

	std::vector<int> a(N,0);
	for(int i=0;i<N;++i)
		std::cin >> a[i];

	int count = 0;
	for(;check(a)==1;count++){
			int same = 0;
		for(int i=0;i<N;++i){
			if(a[i]%2 == 1){
				a[i] *= 3;
				same++;
			}
			else{
				if((a[i]/2)%2 == 1 && same < N ){
					a[i] *= 3;
					same++;
				}
				else{
					a[i] /= 2;
				}
			}
		}
		for(int i=0;i<N;++i)
			std::cout <<a[i];
		std::cout << std::endl;
		/*
			 if(count == 2)
			 return 0;
			 */


	}
	if(count != 0)
		print(count+1);
	else{
		print(count);
	}


	return 0;
}
int check(std::vector<int> a){

	int len = a.size();
	int count = 0;
	for(int i=0;i<len;++i)
		if(a[i]%2 == 1) count++;

	if(count == len){
		return 0;
	}else{
		return 1;
	}

}
