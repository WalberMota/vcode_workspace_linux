#include<iostream>
#include<cmath>     

 int main(int argc, char const *argv[])
 {
    double peso{7.7};

    //floor
    std::cout << peso << " arredondado para baixo: " << std::floor(peso) << '\n';
    //ceil
    std::cout << peso << " arredondado para cima : " << std::ceil(peso) << '\n';

    return 0;
 }
 