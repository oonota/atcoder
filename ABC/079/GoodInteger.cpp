#include <bits/stdc++.h>


/*
 nazeka WA
*/

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;

	int p = N;
	std::map<int ,int> count;
	while(p != 0){
		count[p%10]++;	
		p /= 10;
	}

	for(auto itr=count.begin();itr!=count.end();++itr){
		if(itr->second > 2){
			print("Yes");
			return 0;
		}
	}


	print("No");
	return 0;
}
