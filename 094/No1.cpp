#include<iostream>
#include<string>

int main(void)
{
	int a,b,x;
	std::string result;



	std::cin >> a; 
	std::cin >> b; 
	std::cin >> x; 

	if(x == a){
		result = "YES";
	}else if (a < x && a+b >= x){
	  result = "YES";
	}else{
		result = "NO";
	}

	std::cout << result << std::endl;


	return 0;

}
