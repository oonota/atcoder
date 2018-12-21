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
	printf("N:%p\n",&N);
	char s[N];
	scanf("%s", s);

	int ans = 0;
	int count = 0;

	int front[26] = {0};
	int back[26] = {0};
	for(int i=1;i<N;++i){

		for(int j=0;j<i;++j) front[s[j] - 'a']++;
		for(int j=i;j<N;++j) back[s[j] - 'a']++;

		count = 0;
		printf("N:%d\n",N);
		for(int j=0;j<N;++j){
			if(front[j] > 0 && back[j] > 0) count++;
		}

		ans = max(count,ans);

		printf("N:%d\n",N);
		for(int j=0;j<N;++j){
			front[j] = 0;
			back[j] = 0;
			printf("front[%d]:%p back[%d]:%p\n",j,&front[j],j,&back[j]);
		}
		printf("N:%p\n",&N);
		// tが０になる

	}

	printf("%d\n", ans);
	return 0;

}
