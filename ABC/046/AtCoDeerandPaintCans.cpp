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

	int a,b,c;
	cin >> a >> b >> c;

	if(a == b && b == c) print(1);
	if(a == b && b != c) print(2);
	if(a != b && b != c) print(3);
	if(b == c && a != b) print(2);

	return 0;

}
