#include<iostream>

void two_plus_one(int *x,int *y);
void one_plus_two(int *x);

int main(void){

	int A,B,C;
	int count = 0;

	std::cin >> A >> B >> C;

	while(A!=B || B!=C || A!=C){
		if(A>B&& A>C){
			two_plus_one(&B,&C);
		}else if(B>A && B>C){
			two_plus_one(&A,&C);
		}else if(C>A && C>B){
			two_plus_one(&A,&B);
		}else if(A>C && A==B){
			one_plus_two(&C);	
		}else if(C>A && C==B){
			one_plus_two(&A);	
		}else if(A>B && A==C){
			one_plus_two(&B);	
		}
		count++;
	}

	std::cout << count << std::endl;

	return 0;



}

void two_plus_one(int *x,int *y){

	(*x)++;
	(*y)++;

}
void one_plus_two(int *x){

	(*x) += 2;


}
