#include<iostream>
#include<string>

#define print(x) std::cout << x << std::endl

int main(void){

	int A,B;
	int count,check;
	int len;
	std::string figure;

	std::cin >> A >> B;

	count = 0;
	for(int num=A;num<=B;num++){
		figure = std::to_string(num);
		len = figure.size();
		check = 0;

		for(int i=0;i<len/2;i++)
			if(figure[i] == figure[len-i-1])	check++;

		if(check == figure.size()/2) count++;


	}
	print(count);

	return 0;
}
