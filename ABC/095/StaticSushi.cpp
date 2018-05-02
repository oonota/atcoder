#include<iostream>
#include<string>

int main(void)
{

	int N,C;
	int *x;
	int *v;
	int sessyu=0;
	int syouhi=0;
	int total = 0;
	int previous=0;


	std::cin >> N >> C;	
	std::cin.ignore();

	x = (int *)calloc(N,sizeof(int *));
	v = (int *)calloc(N,sizeof(int *));

	for(int i=0;i<N;i++){
		std::cin >> x[i] >> v[i];
		std::cin.ignore();
	}

	int i;
	for(i=0;i<N;i++){
		//positive order
		int p_syouhi=0,p_sessyu=0;
		p_syouhi += (x[i]-syouhi);
		sessyu += v[i];
		total = sessyu - syouhi;

		//negative order
		int n_syouhi=0,n_sessyu=0;
		if(previous < total){
			previous = total;
		}
		else{
			break;
		}
	}
	if(i==N){
		std::cout << total << std::endl;
	}else{
		std::cout << previous << std::endl;
	}



	return 0;






}
