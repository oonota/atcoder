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

	int a,b,c;
	char s[101];
	scanf("%d",&a);
	scanf("%d %d",&b, &c);
	scanf("%s",s);

	printf("%d %s\n",a+b+c,s);


	return 0;

}
