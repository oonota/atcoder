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

	if(N%10 == 0){
		print(10);
	}else{
		int ans = 0;
		while(N!=0){
			ans += N%10;
			N /= 10;
		}
		print(ans);
	}



	return 0;

}
