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

	int H,W; cin >> H >> W;
	string dummy;
	VS C;

	REP(i,H){
		cin >> dummy;
		C.push_back(dummy);
	}

	REP(i,H){
		REP(j,2){
			print(C[i]);
		}
	}


	return 0;

}
