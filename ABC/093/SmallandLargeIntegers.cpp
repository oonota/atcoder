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

	int A,B,K;
	scanf("%d %d %d", &A, &B, &K);

	FOR(i,A,B+1){
		if(i<K+A || B-K<i) printf("%d\n",i);
		
	}


	return 0;

}
