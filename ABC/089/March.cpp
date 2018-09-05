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



int main(){

	string s;
	int N;
	long long m, a, r, c, h;
	long long D[5];
	int P[10] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 2};
	int Q[10] = {1, 1, 1, 2, 2, 3, 2, 2, 3, 3};
	int R[10] = {2, 3, 4, 3, 4, 4, 3, 4, 4, 4};
	m = a = r = c = h = 0;

	cin >> N;
	REP(i,N){
		cin >> s;
		if(s[0] == 'M') m++;
		if(s[0] == 'A') a++;
		if(s[0] == 'R') r++;
		if(s[0] == 'C') c++;
		if(s[0] == 'H') h++;
	}

	D[0] = m,D[1]=a,D[2]=r,D[3]=c,D[4]=h;
	long long res=0;
	REP(i,10){
		res+=D[P[i]]*D[Q[i]]*D[R[i]];
	}
	print(res);


}
