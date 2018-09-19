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

	int W,H,N;
	cin >> W >> H >> N;

	VI x(N,0);
	VI y(N,0);
	VI a(N,0);
	REP(i,N)	cin >> x[i] >> y[i] >> a[i];

	int origin_x,origin_y;
	origin_x = origin_y = 0;

	REP(i,N){

		switch(a[i]){
			case 1:
				origin_x = x[i];
				break;
			case 2:
				W = x[i];
				break;
			case 3:
				origin_y = y[i];
				break;
			case 4:
				H = y[i];
				break;
		}

	}

	int area = (W-origin_x)*(H-origin_y);

	if(area >= 0) print(area);
	else print(0);

	return 0;

}

