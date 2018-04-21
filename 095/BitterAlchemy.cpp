#include<iostream>

void bubblesort(int *array,int N);

int main(void){

	int N,X;
	int *m;
	int flag = 1;
	int total=0;
	int m_sum=0;
	int count=0;

	std::cin >> N >> X;
	std::cin.ignore();

	m = (int *)calloc(N,sizeof(int *));

	for(int i=0;i<N;i++){
		std::cin >> m[i];
		std::cin.ignore();
	}

	bubblesort(m,N);

	for(int i=0;i<N;i++){
		total += m[i];
		if(total > X)
			total -= m[i];
		else{
			count++;
		}
	}
	int i=0;
	while(1){
		total += m[i];
		if(total > X){
			total -= m[i];
		break;
		}else{
			count++;
		}



	}



	std::cout << count << std::endl;

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
