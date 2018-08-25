#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl


//TLE


int main(void){

	int K,S;
	std::cin >> K >> S;

	int count = 0;
	for(int X=0;X<=K;++X){
		for(int Y=0;Y<=K;++Y){
			int Z = S - X - Y;
				if(0 <= Z && Z <= K) count++;
		}
	}
	print(count);
	return 0;
}
