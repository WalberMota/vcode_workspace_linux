/* estudo com o operador booleano
 */


//
#include<iostream>

int main(int argc, char const *argv[])
{
    bool condition{true};
    bool other_condition{false};

    std::cout <<"Condição verdadeira: " << condition <<'\n';
    std::cout <<"Condição falsa: " << other_condition <<"\n\n";

    
    std::cout<<std::boolalpha;
    std::cout<<"Usando std::boolalpha obtemos a pala true e false ao invés de 1 e 0\n";
    std::cout <<"Condição verdadeira: " << condition <<'\n';
    std::cout <<"Condição falsa: " << other_condition <<"\n\n";

    std::cout<<std::noboolalpha;
    std::cout<<"Usando std::noboolalpha obtemos novamente 1 e 0 (default)\n";
    std::cout <<"Condição verdadeira: " << condition <<'\n';
    std::cout <<"Condição falsa: " << other_condition <<'\n';


    return 0;
}
