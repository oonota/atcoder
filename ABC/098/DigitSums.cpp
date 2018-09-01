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

	int N; cin >> N;
	int dummy = N;	
	int S = 0;

	while(dummy != 0){
		S += dummy % 10;
		dummy /= 10;
	}

	if(N%S == 0){
		print("Yes");
	}else{
		print("No");
	}



	return 0;

}
