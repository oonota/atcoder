#include<iostream>
#include<string>

#define NUM 3

int main(void){

	int count[NUM] = {0};
	char line[NUM];
	int flag = 0;

	std::cin >> line;
	for(int i=0;i<NUM;i++){
		count[line[i]-'a']++;
	}
	for(int i=0;i<NUM;i++){
		if(count[i] != 1){
		flag = 1;
		}
	}
	if(flag){
		std::cout << "No" << std::endl;
	}else{
	  std::cout << "Yes" << std::endl;
	}

}
