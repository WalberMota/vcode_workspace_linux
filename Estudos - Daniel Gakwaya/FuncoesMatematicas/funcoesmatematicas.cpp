/*
Autor: WalberMota
Data da Criação: 09/11/2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM) i5-5200U CPU @ 2.20GHz (306D4)
Objetivos: resumo de funções matemáticas.
Linguagem C++
 */

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
    std::cout << "O exponecial de e^10 é : " << exponential << '\n';

    std::cout << "\n***** Usando pow(x,y)\n";
    std::cout << "5 elevado ao quadrado é : " << pow (5, 2); // cinco elevado ao quadrado
    std::cout << "\n2 elevado ao cubo é : " << pow (2, 3); //cinco elevado ao quadrado

/*log : é a função reversa de pow. Se 2³ = 8, log de 8 na base 2 = 3. Log é como perguntar
"qual expoente devemos elevar 2 para obter o resultado 8". Log por padrão calcula  o log na
base e. Há também outra função que usa a base 10 chamada log10
*/
//tente a função reversa de e⁴ = 54.59, ele será o log 54.59 na base e = ?
  std::cout << "\n\n";
  std::cout << "***** Usando std::log e std::log10\n";
  std::cout << "Para obter 54.59, você deve elevar 'e' à potencia: " << std::ceil (std::log(54.59)) << '\n';
//log na base 10
  std::cout << "Para obter 10000, você deve elevar 10 à potencia: " << std::log10(10000) << '\n';

//sqrt = raiz quadrada de um numero
  std::cout << "\n***** Usando std::sqrt()";
  std::cout << "\nA raiz quadrada de 81 é " << std::sqrt(81) << '\n';

//arredondamento usando std::round()
  std::cout << "\n***** Usando std::round()";
  std::cout << "\n3.654 arredondado para  " << std::round(3.654) << '\n';
  std::cout << "3.454 arredondado para  " << std::round(3.454) << '\n';
  std::cout << "2.5 arredondado para  " << std::round(2.5) << '\n';
  std::cout << "2.4 arredondado para  " << std::round(2.4) << '\n';


    return 0;
 }
 