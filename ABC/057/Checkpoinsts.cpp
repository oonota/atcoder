#include <bits/stdc++.h>

#define print(x) std::cout << x << std::endl

int manhattan(int student_x,int student_y,int point_x,int point_y);

int main(void){

	int N,M;
	std::cin >> N >> M;

	std::vector<int> a(N,0);
	std::vector<int> b(N,0);
	for(int i=0;i<N;++i) 
		std::cin >> a[i] >> b[i];

	std::vector<int> c(M,0);
	std::vector<int> d(M,0);
	for(int i=0;i<M;++i) 
		std::cin >> c[i] >> d[i];


	for(int i=0;i<N;++i){
		std::vector<int> distance(M,0);
		for(int j=0;j<M;++j){
			distance[i] = manhattan(a[i],b[i],c[i],d[i]);
		}
		int min_idx = 0;
		for(int k=0;k<M-1;++k){
			if(distance[min_idx]>distance[k+1]){
				min_idx = k+1;
			}

		}
		print(min_idx+1);
	}






	return 0;
}
int manhattan(int student_x,int student_y,int point_x,int point_y)
{
		return std::abs(student_x-student_y) + std::abs(point_x-point_y);
}
