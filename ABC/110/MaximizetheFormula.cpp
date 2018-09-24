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

	VI input(3,0);
	REP(i,3) cin >> input[i];

	SORT(input);

	int ans = input[2]*10+input[1]+input[0];
	print(ans);


	return 0;

}
