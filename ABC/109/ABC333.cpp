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

	int A,B; cin >> A >> B;

	FOR(i,1,4){
		if((A*B*i)%2 == 1){
			print("Yes");
			return 0;
		}
	}

	print("No");

	return 0;

}
