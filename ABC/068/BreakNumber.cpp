#include <stdio.h>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	int N;
	int two[7] = {1,2,4,8,16,32,64};
	scanf("%d", &N);

	int i;
	for(i=0;i<7;++i) if(N < two[i]) break;
	printf("%d\n",two[i-1]);
	



	return 0;

}
