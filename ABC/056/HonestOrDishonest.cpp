#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

 char a,b;
 std::cin >> a >> b;

 if(a=='H')
	 print(b);
 else{
	 if(b=='H')
		 print('D');
	 else
		 print('H');
 }

	return 0;
}
