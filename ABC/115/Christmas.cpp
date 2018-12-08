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

string burger(int n){

		string p = "P";
	if(n == 0){ 
		return p;
	}
	else {
		string b = "B";
		return b + burger(n-1) + p + burger(n-1) + b ;
	}

}

int main(void){

	long long int N,X;
	cin >> N >> X;
	string hoge = burger(N);

	int count = 0;
	REP(i,X){
	if (hoge[i] == 'P') count++;
	}

	print(count);


	return 0;

}
