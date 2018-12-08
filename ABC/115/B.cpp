#include <cstdio>
#include <vector>
#include <algorithm>


using namespace std;
int main(){

	int N;
	scanf("%d", &N);
	vector<int> p(N,0);
	for(int i=0;i<N;++i)
		scanf("%d", &p[i]);

	sort(p.begin(),p.end());
		int sum = 0;
	for(int i=0;i<N-1;++i){
		sum += p[i];

	}
	sum += p[N-1]/2;


	printf("%d\n",sum);


	return 0;
}
