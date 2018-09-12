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
	VS w;
	string dummy;
	REP(i,N){
		cin >> dummy;
		w.push_back(dummy);
	}


	REP(i,N-1){
		if(w[i].back() != w[i+1].front()){
			print("No");
			return 0;
		}
	}

	int w_count = w.size();
	SORT(w);
	w.erase(unique(w.begin(), w.end()), w.end());
	if(w_count != w.size()){
		print("No");
		return 0;

	}

	print("Yes");


	return 0;

}
