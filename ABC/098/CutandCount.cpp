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
	scanf("%d", &N);
	char s[N];
	scanf("%s", s);

	int ans = 0;
	int count = 0;

	int front[26] = {0};
	int back[26] = {0};
	FOR(i,1,N){

		printf("N:%d\n",N);
		REP(j,i) front[s[j] - 'a']++;
		FOR(j,i,N) back[s[j] - 'a']++;
		printf("N:%d\n",N);

		count = 0;
		REP(j,N) if(front[j] > 0 && back[j] > 0) count++;

		ans = max(count,ans);

		REP(k,N) front[k] = back[k] = 0;

		// Nが０になる

	}

	printf("%d\n", ans);
	return 0;

}
