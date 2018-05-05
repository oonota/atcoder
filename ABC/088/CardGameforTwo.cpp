#include <iostream>
#include <vector>
#include <algorithm>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	int swap;
	int alis,bob;
	std::vector<int> a;

	std::cin >> N;
	for(int i=0;i<N;i++){
		std::cin >> swap;
		a.push_back(swap);
	}

	std::sort(a.begin(),a.end(),std::greater<int>());

	alis = bob = 0;	
	for(int i=0;i<N;i++)
		!(i%2)?alis+=a[i]:bob+=a[i];

	print(alis-bob);

	return 0;
}
