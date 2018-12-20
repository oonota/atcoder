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

	int X,A,B;
	scanf("%d %d %d", &X, &A, &B);

	int now = -A+B;
	if(now <= 0) printf("delicious\n");
	else if(now <= X) printf("safe\n");
	else printf("dangerous\n");


	return 0;

}
