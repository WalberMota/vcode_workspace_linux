#include<iostream>
#include<string>


int main(int argc, char const *argv[])
{
    std::string r1,r2,r3;

    std::cout << "Digite o primeiro raio: ";
    getline(std::cin,r1);
    
    std::cin.ignore();
    std::cout << "Digite o segundo raio: ";
    getline(std::cin,r2);
    
    std::cin.ignore();
    std::cout << "Digite o terceiro raio: ";
    getline(std::cin,r3);


    

    return 0;
}

