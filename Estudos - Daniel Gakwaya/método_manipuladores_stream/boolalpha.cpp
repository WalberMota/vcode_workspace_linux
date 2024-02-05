/* estudo com o operador booleano
 */

#include<iostream>

int main(int argc, char const *argv[])
{
    bool condition{true};
    bool other_condition{false};

    std::cout <<"Condição: " << condition <<'\n';
    std::cout <<"Outra condição: " << other_condition <<"\n\n";

    
    std::cout<<std::boolalpha;
    std::cout <<"Condição: " << condition <<'\n';
    std::cout <<"Outra condição: " << other_condition <<"\n\n";

    std::cout<<std::noboolalpha;
    std::cout <<"Condição: " << condition <<'\n';
    std::cout <<"Outra condição: " << other_condition <<'\n';


    return 0;
}
