#include <bits/stdc++.h>
#include <stdio.h>
#include <cmath>

#define print(x) std::cout << x << std::endl

using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)


#define MIN 10000000

int main(void){

	int N,T;
	scanf("%d %d", &N, &T);
		
	int c[N],t[N];
	REP(i,N) scanf("%d %d", &c[i], &t[i]);

	int min_index = 0;
	int min = MIN;
	
	REP(i,N){
		if(c[i] < min && t[i] <= T){
			min = c[i];
			min_index = i;
		}
	}
	if(min == MIN) print("TLE");
	else print(min);


	return 0;

}
