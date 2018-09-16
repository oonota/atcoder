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

	int N,x;
	cin >> N >> x;

	VI a(N,0);
	REP(i,N)	cin >> a[i];

	SORT(a);

	int ans = 0;
	int count = 0;
	REP(i,N){
		x -= a[i];
		if(x >= 0){
			ans++;
			if(i == N-1 && x != 0) ans--;
		}
		else break;
	}

	print(ans);


	return 0;

}
