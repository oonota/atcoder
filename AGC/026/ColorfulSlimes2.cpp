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

	VI a(N,0);
	REP(i,N) cin >> a[i];

	int ans = 0;
	REP(i,N-1){
		if(a[i] == a[i+1]){
			ans++;
			a[i+1] = -1;
		}
	}

	print(ans);

	return 0;

}
