#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

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
	cin >> N >> K;
	VI h(N,0);
	REP(i,N) cin >> h[i];
	SORT(h);
	int min = h[N-1] - h[0];
	REP(i,N-K+1){
		int now = h[K+i-1] - h[i];
		if(now < min) min = now;
	}

	print(min);


	return 0;

}
