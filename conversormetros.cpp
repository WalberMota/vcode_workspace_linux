/*
Autor: WalberMota
Data da Criação: 15/03/2023
Objetivos: converter metros em decimetros,centimetros e milimetros
Linguagem C++
 */

#include <iostream>

int main(int argc, char const *argv[])
{
    float metros;
    int opt;
    float result;
    /* code */
    std::cout << "Digite o valor em metros";
    std::cin >> metros;
    std::cout << "Escolha a conversão:"<<std::endl;
    std::cout << "1 - decímetros"<<std::endl;
    std::cout << "2 - centímetros"<<std::endl;
    std::cout << "3 - milímetros"<<std::endl<<std::endl;
    std::cout<<" >> ";
    std::cin>>opt;
    if (opt==1)
    {
        result=metros*10;
        std::cout<<metros<<" metros são ";
        std::cout<<result<<" dm";
    }
    if (opt==2)
    {
        result=metros*100;
        std::cout<<metros<<" metros são ";
        std::cout<<result<<" cm";
    }
    if (opt==3)
    {
        result=metros*1000;
        std::cout<<metros<<" metros são ";
        std::cout<<result<<" mm";
    }

        return 0;
}
