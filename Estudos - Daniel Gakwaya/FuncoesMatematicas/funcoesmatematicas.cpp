#include<iostream>
#include<cmath>     

 int main(int argc, char const *argv[])
 {
    double peso{7.7};
    
    //floor
    std::cout << "##### Usando std::floor e std::ceil\n";
    std::cout << peso << " arredondado para baixo: " << std::floor(peso) << '\n';
    //ceil
    std::cout << peso << " arredondado para cima : " << std::ceil(peso) << '\n';

    //usando função abs
    
    double valor1{-5000};
    std::cout << "\n##### Usando std::abs\n";
    std::cout << valor1 << " tem valor absoluto (abs) de " << std::abs(valor1) << '\n';
    std::cout << peso << " tem valor absoluto (abs) de " << std::abs(peso) << '\n';
    

    return 0;
 }
 