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

	int N,M,X,Y;
	scanf("%d %d %d %d", &N, &M, &X, &Y);

	int x_max = X;	
	int x;
	REP(i,N){
		scanf("%d", &x);
		x_max = max(x_max,x);
	}

	int y_min = Y;	
	int y;
	REP(i,M){
		scanf("%d", &y);
		y_min = min(y_min,y);
	}

	// printf("%d\n",x_max);
	// printf("%d\n",y_min);
	if(x_max<y_min){
		printf("No War\n");
	}else{
		printf("War\n");
	}


	return 0;

}
