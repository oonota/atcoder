#include<iostream>

int main(void){

	int A,B,C,X,Y;
	int total=0;

	std::cin >> A >> B >> C >> X >> Y;

	if(A+B>C*2){
		if(X>Y){
			total += C*Y*2;
			if(A<C*2){
				total += A*(X-Y);
			}else{
				total += C*(X-Y)*2;
			}
		}else{
			total += C*X*2;
			if(B<C*2){
				total += B*(Y-X);
			}else{
				total += C*(Y-X)*2;
			}
		}
	}
	else{
		total += (A*X + B*Y);

	}

	std::cout << total << std::endl;

	return 0;


}
