#include<iostream>
#include<cmath>     

 int main(int argc, char const *argv[])
 {
    double peso{7.7};
    
    //floor
    std::cout << "***** Usando std::floor e std::ceil\n";
    std::cout << peso << " arredondado para baixo: " << std::floor(peso) << '\n';
    //ceil
    std::cout << peso << " arredondado para cima : " << std::ceil(peso) << '\n';

   
    double valor1{-5000};
    std::cout << "\n***** Usando std::abs\n";
    std::cout << valor1 << " tem valor absoluto (abs) de " << std::abs(valor1) << '\n';
    std::cout << peso << " tem valor absoluto (abs) de " << std::abs(peso) << '\n';

//O número e é uma constante matemática que é a base dos logaritmos naturais.\
  Por vezes é chamado número de Euler e equivale a aprox. 2.718281828459045235360
    std::cout << "\n***** Usando exp(x)=e^{x}\n";
    double exponential = std::exp(10);
    std::cout << "O exponecial de 10 é : " << exponential << '\n';

    std::cout << "\n***** Usando pow(x,y)\n";
    std::cout << "5 elevado ao quadrado é : " << pow (5, 2); // cinco elevado ao quadrado
    std::cout << "2 elevado ao cubo é : " << pow (2, 3); // cinco elevado ao quadrado


    

    return 0;
 }
 