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

using Int = long long;

int N;
int ans = 0;

void dfs(Int x, Int a, Int b, Int c){
	if(x>N) return;
	if(a&&b&&c) ans++;
	dfs(x*10+3,1,b,c);
	dfs(x*10+5,a,1,c);
	dfs(x*10+7,a,b,1);

}



int main(void){

	scanf("%d",&N);
	dfs(0,0,0,0);
	print(ans);

	return 0;

}
