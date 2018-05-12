#include<iostream>

#define print(x) std::cout << x << std::endl

int main(void){

	int A,B,C;
	int X;
	int count;
	int calc;

	std::cin >> A;
	std::cin >> B;
	std::cin >> C;
	std::cin >> X;

	count = 0;
	for(int i=0;i<=A;++i){
		for(int j=0;j<=B;++j){
			for(int k=0;k<=C;++k){
				calc = 500*i + 100*j + 50*k;
				if(calc == X){ count++;}
			}
		}

	}

	print(count);


	return 0;
}
