#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string r1, r2, r3;

    //std::cin.ignore();
    std::cout << "Digite o primeiro raio: ";
    getline(std::cin, r1);

    std::cout << "Digite o segundo raio: ";
    getline(std::cin, r2);

    std::cout << "Digite o terceiro raio: ";
    getline(std::cin, r3);

    std::cout << "r1=" << r1 << " r2=" << r2 << " r3=" << r3 << std::endl;

    return 0;
}
