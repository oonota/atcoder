#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	int x,y;
	std::cin >> x >> y;

	int group_a[] = {1,3,5,7,8,10,12};
	int group_b[] = {4,6,9,11};
	int group_c[] = {2};

	int flag_x,flag_y;
	flag_x = flag_y = 0;

	for(int i=0;i<7;++i){
		if(x == group_a[i])
			flag_x = 1;
		if(y == group_a[i])
			flag_y = 1;
	}
	if(flag_x == 1 && flag_y == 1){
		print("Yes");
		return 0;
	}

	flag_x = flag_y = 0;
	for(int i=0;i<4;++i){
		if(x == group_b[i])
			flag_x = 1;
		if(y == group_b[i])
			flag_y = 1;
	}
	if(flag_x == 1 && flag_y == 1){
		print("Yes");
		return 0;
	}

	if(x == y){
		print("Yes");
		return 0;
	}

	print("No");
	return 0;

}
