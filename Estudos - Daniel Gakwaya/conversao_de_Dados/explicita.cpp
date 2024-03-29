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
	std::cout << "Soma e depois faz o cast do resultado: " << sum << std::endl;


	//C-cast estilo antigo
	double PI {3.14};
	//int int_pi = (int)(PI);
    //dê preferencia ao C++ static_cast<>: 1)static_cast é verificado no momento da compilação assim
    //se os tipos não são compatíveis um erro ocorre no momento da compilação. 2)É mais fácil de ser
    //encontrado no seu código. 3)Deixa sua intensão mais clara no código.
    int int_pi = static_cast<int>(PI);
	std::cout << "PI : " << PI << std::endl;
    std::cout << "int_pi : " << int_pi << std::endl;
   
    return 0;
}