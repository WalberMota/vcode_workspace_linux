#include<iostream>

int main(int argc, char const *argv[])
{

    double d{34.1};
    double e{101.99};
    double f{12};
    int    g{45};

    std::cout << std::showpoint;
    std::cout << "d :" << d << '\n';
    std::cout << "e :" << d << '\n';
    std::cout << "f :" << d << '\n';
    std::cout << "g :" << d << '\n';

    std::cout <<"\n\n"<< std::noshowpoint;
    std::cout << "d :" << d << '\n';
    std::cout << "e :" << d << '\n';
    std::cout << "f :" << d << '\n';
    std::cout << "g :" << d << '\n';



    return 0;
}
