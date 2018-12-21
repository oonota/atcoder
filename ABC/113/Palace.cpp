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
	double T,A;
	double H;

	scanf("%d", &N);
	scanf("%lf %lf", &T, &A);

	int index = 0;
	double min = 100000000.0;
	double here;

	REP(i,N){
		scanf("%lf", &H); 
		here = fabs(A-(T - H*0.006));	
		// printf("%f\n", here);
		if(here < min){
			index = i;
			min = here;
		}

	}

	printf("%d\n",index+1);
	return 0;

}
