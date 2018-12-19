#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl
// #define print(x) cout << x << endl

using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

#define X 753

int main(void){

	string s;
	cin >> s;	
	VI diff(s.size()-2,0);

	REP(i,s.size()-2){
		diff[i] = abs(X-stoi(s.substr(i,3)));
	}

	SORT(diff);
	print(diff.front());


	return 0;

}
