#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int type(std::map<int,int> m);
int supplus(std::map<int,int> m,int K);

int main(void){

	int N,K;
	std::cin >> N >> K;

	std::vector<int> A(N,0);
	for(int i=0;i<N;++i)
		std::cin >> A[i];

	int val = 0;
	std::map<int, int> m;

	for(int i=0;i<N;++i){
		m[A[i]] += 1;
	}

	if(type(m) <= K)
		val = 0;
	else{
		val = supplus(m,K);			
	}

	print(val);

	return 0;

}
int type(std::map<int,int> m){

	int count = 0;
	for(auto itr=m.begin();itr!=m.end();++itr)
		count++;

	return count;
}
int supplus(std::map<int,int> m,int K){

	int unique_num = type(m);
	int index[unique_num];
	int value[unique_num];


	for(int i=0;i<unique_num;++i){
		for(int j=0;j<unique_num-1;++j){
			if(value[j]<value[j+1]){
				std::swap(value[j],value[j+1]);
				std::swap(index[j],index[j+1]);
			}
		}
	}


	int exclude = 0;
	for(int i=0;i<unique_num;++i){
		if(i >= K)
			exclude += value[i];
	}

	return exclude;

}
