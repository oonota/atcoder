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

	int b = N / 100;
	int ans = b * 100 + b * 10 + b;
	if(ans<N){
		b += 1;
		ans = b * 100 + b * 10 + b;
	}

	print(ans);
	return 0;

}
