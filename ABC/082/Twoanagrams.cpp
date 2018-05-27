#include<bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int main(void){

	std::string s,t;

	std::cin >> s;
	std::cin >> t;

	int i,j;
	int count=0;
	int s_size = s.size();
	int t_size = t.size();

	for(i=0;i<s_size;++i){
		for(j=0;j<t_size;++j){
			if(s[i]<t[j]){
				print("Yes");
				return 0;
			}else if(s[i]==t[j]){
				count++;
			}
		}
	}

	if(count == (s_size*t_size) && s_size < t_size){
		print("Yes");
		return 0;
	} 

	print("No");
	return 0;

}
