#include <iostream>
#include<vector>
#include <string>

#define print(x) std::cout << x << std::endl


bool different_check(char a,char b,char c);

int main(void) {

	int N;
	int n,i,flag,j,k;
	int count;
	int S_size;
	std::vector<std::string> S;
	std::vector<char> keywords{'M','A','R','C','H'};
	std::string input;

	std::cin >> N;	

	for (n = 0; n < N; n++) {
		std::cin >> input;
		flag = 0;
		for(i=0;i<keywords.size();i++){
			if(keywords[i] == input.front()){ 
				flag = 1;
				i = keywords.size();
			}
		}
		if(flag) S.push_back(input);
	}
	S_size = S.size();
	count = 0;
	if(S_size == 0) flag++;  
	else{
		for(i=0;i<S_size-2;i++){
			for(j=i+1;j<S_size-1;j++){
				for(k=j+1;k<S_size;k++){
					if(different_check(S[i].front(),S[j].front(),S[k].front()))
						count++;
				}
			}
		}

	}
	print(count);

	return 0;
}
bool different_check(char a,char b,char c)
{
	bool check1 = (a != b);
	bool check2 = (a != c);
	bool check3 = (c != b);

	if(check1 == true && check2 == true && check3 == true) return 1;
	else return 0;

}
