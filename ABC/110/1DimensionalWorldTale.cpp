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

	int N,M,X,Y;
	cin >> N >> M >> X >> Y;

	VI x(N,0);
	VI y(M,0);
	REP(i,N) cin >> x[i];
	REP(i,M) cin >> y[i];

	SORT(x);
	SORT(y);

	
	auto x_result = find(x.begin(), x.end(), Y);
	auto y_result = find(y.begin(), y.end(), X);
	
	if(x_result != x.end() || y_result != y.end()){
		print("War");
		return 0;
	}


	if(x.back() < y.front()){
		int Z = x.back()+1;
		
		print("No War");
	}else{
		print("War");
	}


	return 0;

}
