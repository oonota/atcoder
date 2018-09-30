#include<bits/stdc++.h>

#define print(x) std::cout << x 

using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	string i;
	cin >> i;

	REP(n,3){

		if(i[n] == '9') print(1);
		else if(i[n] == '1') print(9);
	}
	print(endl);

	return 0;

}
