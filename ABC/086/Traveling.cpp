#include<iostream>
#include<vector>

#define print(x) std::cout << x << std::endl

int main(void){

	int N;
	int t_i;
	int x_i,y_i;
	int sum_xy;
	std::cin >> N;

	std::vector<int> t(N,0);
	std::vector<int> x(N,0);
	std::vector<int> y(N,0);

	for(int i=0;i<N;i++){
		std::cin >> t[i]	>> x[i] >> y[i];
	}

	t_i = 0;
	x_i = y_i = 0;
	for(int i=0;i<N;i++){
		t_i = t[i] - t_i;
		sum_xy = std::abs(x[i] - x_i) + std::abs(y[i] - y_i);
		if(t_i % 2 != sum_xy %2 || t_i < sum_xy){
			print("No");
			return 0;
		}
		x_i = x[i];
		y_i = y[i];
	}
	print("Yes");
	return 0;

}
