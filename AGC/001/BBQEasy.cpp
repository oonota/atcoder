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

	int N;
	cin >> N;

	VI L(2*N,0);
	REP(i,2*N) cin >> L[i];

	SORT(L);

	int ans = 0;
	REP(i,N)
		ans += min(L[2*i],L[2*i+1]);

	print(ans);

	return 0;

}
