#include<iostream>
#include<string>

void bubblesort(int *array,int N);
int middle(int *array,int a,int N);


int main(void){

	int N;
	int *X;

	std::string line;
	std::string num;
	int j = 0;


	std::cin >> N;
	std::cin.ignore();

	X = (int *)calloc(N,sizeof(int *));

	std::getline(std::cin,line);
	for(int i=0;i<N;i++){
		num = "";
		for(;j<line.size()&&line[j] != ' ';j++){
			num.push_back(line[j]);
		}
		j++;
		X[i] = std::stoi(num);	

	}


	for(int i=0;i<N;i++){

		std::cout << middle(X,i,N) << std::endl;

	}

	free(X);

	return 0;

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
int middle(int *array,int a,int N)
{

	int *x;
	int j;

	x = (int *)calloc(N-1,sizeof(int *));

	j = 0;
	for(int i=0;i<N;i++){
		if(i != a){
			x[j] = array[i];
			j++;
		}
	}

	bubblesort(x,N-1);

	free(x);
	
	return x[(N-1)/2];

}
