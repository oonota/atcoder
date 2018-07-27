#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	std::string s1;
	std::string s2;
	std::string s3;
	std::cin >> s1 >> s2 >> s3;	

	std::transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
	std::transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
	std::transform(s3.begin(), s3.end(), s3.begin(), ::toupper);

	std::cout << s1[0] << s2[0] << s3[0] << std::endl;



	return 0;

}
