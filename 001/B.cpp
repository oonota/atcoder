#include<iostream>
#include<string>

#define KM 1000

int main(void){

	int input;
	std::string vv;

	std::cin >> input;	

	if(input < 100){
		vv = "00";
	}else if( input < 6*KM  ){
		if(input/KM == 0){
			vv = "0";
			vv += std::to_string(input/100);
		}
		else{
			vv = std::to_string(input/100);
		}


	}else if(input < 30*KM){
		vv = std::to_string((input/KM)+50);
	}else if(input <= 70*KM){
		vv = std::to_string((input/KM-30)/5+80);
	}else{
		vv = "89";
	}


	std::cout << vv << std::endl;	

	return 0;



}
