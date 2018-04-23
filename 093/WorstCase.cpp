#include<iostream>

int main(void){


	int Q;
	long int i;
	long int *a;
	long int *b;
	long int count;
	long int a_i,b_i;

	std::cin >> Q;
	std::cin.ignore();

	a = (long int *)calloc(Q,sizeof(long int *));
	b = (long int *)calloc(Q,sizeof(long int *));


	for(i=0;i<Q;++i){
		std::cin >> a[i] >> b[i];
		std::cin.ignore();
	}

	for(i=0;i<Q;++i){
	std::cout << a[i] <<' '<< b[i]	<< std::endl;
	
	}

	for(i=0;i<Q;++i){
		count = 0;

		for(a_i=1;a_i<a[i];++a_i)
			for(b_i=1;b_i<b[i];++b_i)
				if(a_i*b_i<a[i]*b[i]) ++count;
		std::cout << count << std::endl;

	}
	return 0;



}
