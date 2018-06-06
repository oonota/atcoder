#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

#define RESULT 7

int calc(std::string a);

int main(void){

	std::string input;
	std::cin >> input;

	int sum = 0;
	int p;
	int flag[3];	
	char simbol[3];
	for(int i=0;i<8;++i){

		std::string d(input);
		p = i;

		flag[0] = i & 1;	
		flag[1] = (i&2) >> 1;
		flag[2] = (i&4) >> 2;

		simbol[0] = flag[0]?'-':'+';
		simbol[1] = flag[1]?'-':'+';
		simbol[2] = flag[2]?'-':'+';

		d.insert(d.begin()+1,simbol[0]);
		d.insert(d.begin()+3,simbol[1]);
		d.insert(d.begin()+5,simbol[2]);

		if(calc(d) == RESULT ){
			d += ("=7");
			print(d);
			break;

		}
	
	}

	return 0;

}

int calc(std::string a){

	int A = (a[0]) - '0';
	int B = (a[2]) - '0';
	int C = (a[4]) - '0';
	int D = (a[6]) - '0';
	int result = 0;

	result += a[1]=='+'?A+B:A-B;
	result += a[3]=='+'?C:-C;
	result += a[5]=='+'?D:-D;

	return result;

}
