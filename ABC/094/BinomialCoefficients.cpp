#include<iostream>
#include<string>

void bubblesort(int *array,int N);
int factorial(int n);

int main(void){


	int n;
	int *a;

	std::string line;
	std::string num;
	int j = 0;

	int xy[2] = {0};

	std::cin >> n;
	std::cin.ignore();

	a = (int *)calloc(n,sizeof(int *));

	std::getline(std::cin,line);
	for(int i=0;i<n;i++){
		num = "";
		for(;j<line.size()&&line[j] != ' ';j++){
			num.push_back(line[j]);
		}
		j++;
		a[i] = std::stoi(num);	
	}

	bubblesort(a,n);

	int previous=0;
	int result;
	int ue,shita;
	for(int i=n-1;i>-1;i--){
		for(int j=n-1;j>-1;j--){
			if(a[i] > a[j]){
				ue = a[i];
				shita = a[j];
				for(int u=0;u<a[j]-1;u++){
					ue = ue * (a[i] - (u+1));
				}
				shita = factorial(a[j]);
				result = ue/shita;

				if(previous < result){
					previous = result;
					xy[0] = a[i];
					xy[1] = a[j];
				} 
			}
		}
	}

	std::cout << xy[0] << ' ' << xy[1] << std::endl;

}


void bubblesort(int *array,int N){

	int tmp;
	for(int i=0;i<N;i++){
		for(int j=0;j<N-1;j++){
			if(array[j]>array[j+1]){
				tmp = array[j];
				array[j] = array[j+1];
				array[j+1] = tmp;
			}

		}
	}


}
int factorial(int n)
{
	if(n>0){
		return n*factorial(n-1);
	}else{
		return 1;
	}

}
