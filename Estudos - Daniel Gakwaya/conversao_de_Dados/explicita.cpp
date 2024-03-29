#include <iostream>


int main(){

//A conversão implícita irá somar os duplos,
//então transforma o resultado em int para atribuição

	double x { 12.5 };
    double y { 34.6};
    
    int sum = x + y; 
    
    std::cout << "The sum  is : " << sum << std::endl;


	//Conversão explícita: conversão e soma
	sum = static_cast<int>(x) + static_cast<int>(y) ;
    std::cout << "The sum  is : " << sum << std::endl;

    //Conversão explícita: soma e depois lança, a mesma coisa que conversão implícita
	sum =  static_cast<int> (x + y);
	std::cout << "Sum up then cast, result : " << sum << std::endl;


	//Old style C-cast
	double PI {3.14};
	
	//int int_pi = (int)(PI);
    int int_pi = static_cast<int>(PI);
	std::cout << "PI : " << PI << std::endl;
    std::cout << "int_pi : " << int_pi << std::endl;
   
    return 0;
}