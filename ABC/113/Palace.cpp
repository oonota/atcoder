#include <cstdio>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;


int main(void){

	int N;
	int T,A;
	vector<int> H(N,0);

	scanf("%d",&N);
	scanf("%d",&T);
	scanf("%d",&A);

	int tmp;
	int test;
	int min = 1000000000;
	int index = 0;
	for(int i=0;i<N;++i){
		scanf("%d",&tmp);
	
		test = T - tmp*0.006;
		
		int abs = fabs(test-T);
		if(min>abs){
			min = abs;
			index = i+1;
		}

	}

	printf("%d\n",index);


	return 0;

}
