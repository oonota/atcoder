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

	int a,b;
	cin >> a >> b;

	int ans = a;
	FOR(i,a+1,b+1){
		ans *= i;
	}

	if(ans == 0) print("Zero");
	else if(ans > 0) print("Positive");
	else if(ans < 0) print("Negative");

	return 0;

}
