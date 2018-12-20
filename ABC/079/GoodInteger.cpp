#include <stdio.h>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)



int main(void){

	char N[4];
	scanf("%s", N);
	int flag = 0;

	if(N[0] == N[1] && N[0] == N[2]) flag = 1;

	else if(N[1] == N[2] && N[1] == N[3])flag = 1;





	if(flag == 1) printf("Yes\n");
	else printf("No\n");

	return 0;

}
