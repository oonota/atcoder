#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int A,B,C;
	std::cin >> A >> B >> C;

	bool ac = (C >= A);
	bool bc = (C <= B);

	if(ac == true && bc == true)
		print("Yes");
	else
		print("No");


	return 0;

}
