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

	int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
	int x = x2 - x1;
	int y = y2 - y1;


	cout << x2-y << ' '<< y2+x << ' '<< x1-y << ' '<< y1+x << endl;


	return 0;

}
