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

	int A,B,C,D;
	scanf("%d %d %d %d", &A, &B, &C, &D);
	int ans;

	ans = max(min(B,D)  - max(A,C),0);

	printf("%d\n", ans);

	return 0;

}
