#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	char c;
	std::cin >> c;
	const std::string vowel = "aiueo";

	std::string hoge = vowel.find(c) == std::string::npos ?  "consonant" : "vowel";
	print(hoge);


	return 0;
}
