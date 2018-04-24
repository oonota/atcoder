#include<iostream>

int main(void){

	int A,B,C,D;
	int total=0;

	std::cin >> A >> B >> C >> D;

	A>B?total+=B:total+=A;
	C>D?total+=D:total+=C;

	std::cout << total << std::endl;



	return 0;

}
