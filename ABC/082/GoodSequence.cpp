#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	std::cin >> N;

	std::vector<int> a(N,0);
	for(int i=0;i<N;++i){
		std::cin >> a[i];
	}

	std::map<int,int> m;
	for(int i=0;i<N;++i)
		m[a[i]] = 0;
	for(int i=0;i<N;++i){
		m[a[i]] += 1; 
	}

	std::vector<int> ex;
	int i=0;
	int count=0;
	for(auto itr=m.begin();itr!=m.end();++itr){
		if(m[a[i]] > a[i]){
			ex.push_back(m[a[i]]-a[i]);
		}else if(m[a[i]] < a[i]){
			ex.push_back(m[a[i]]);
			++count;

		}
		++i;
	}

	if(ex.size()==0){
		ex.push_back(0);
	}
	print(std::accumulate(ex.begin(),ex.end(),0));
	return 0;


}
