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

	long long int a,b,x; cin >> a >> b >> x;
	long long int ans = 0;
	FOR(i,a,b+1){
		if(i%x == 0) 	ans++;
	}

	print(ans);



	return 0;

}
