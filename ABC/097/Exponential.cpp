#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

#define print(x) std::cout << x << std::endl

int main(void)
{
	int x; 
	std::cin >> x;
	std::vector<int> v;

	v.push_back(1);
	for(int i=2;i<x;++i){
		for(int j=2;(int)std::pow(i,j)<=x;++j){
			v.push_back((int)std::pow(i,j));
		}
	}
	std::sort(v.begin(),v.end());
	print(v.back());

	return 0;
}
