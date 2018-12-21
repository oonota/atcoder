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

	int A,B;
	scanf("%d %d", &A, &B);
	char s[A+B+1];
	scanf("%s",s);

	int flag_A = 0;
	REP(i,A){
	if(s[i] >= '0' && s[i] <= '9') flag_A++;
	}

	int flag_B = 0;
	FOR(i,A+1,A+1+B){
	if(s[i] >= '0' && s[i] <= '9') flag_B++;
	}
	if(flag_A == A && flag_B == B && s[A] == '-') printf("Yes\n");
	else printf("No\n");

	return 0;

}
