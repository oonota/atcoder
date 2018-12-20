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

	int N,K;
	scanf("%d %d", &N, &K);

	int diff = 0;
	if(N%K != 0)diff = 1; //diff = abs(N/K-(N%K));

	printf("%d\n",diff);


	return 0;

}
