#include<iostream>
#include<string>

#define print(x) std::cout << x << std::endl
#define ROW 1
#define COL 2

int minus(int a,int condition,int H,int W);

int main(void){

	int H,W;
	std::string result;

	std::cin >> H >> W;
	std::string map[H];

	for(int i=0;i<H;i++){
		std::cin >> map[i];
	}

	for(int i=0;i<H-1;i++){
		for(int j=0;j<W-1;j++){
			if(map[i][j] == '#'){
				if(map[i][j] == map[i][(j+1)%W]){
					j++;
				}else if(map[i][j] == map[i][minus(j,ROW,H,W)]){

				}else if(map[i][j] == map[(i+1)%H][j]){

				}else if(map[i][j] == map[minus(i,COL,H,W)][j]){
				}else{
					print("No");
					return 0;
				}
			}

		}
	}
	print("Yes");
	return 0;

}

int minus(int a,int condition,int H,int W)
{
	a--;
	if(a<0){
		if(condition == ROW){
			return W-1; 
		}
		if(condition == COL){
			return H-1;
		}
	}
	return a;

}
