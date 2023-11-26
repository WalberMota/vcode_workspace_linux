#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[])
{
    float inicial{1000.00};
    int i = 0;
    std::cout<<std::setprecision(2);
    std::cout << std::fixed;
    while (inicial < 2000.00)
    {
        std::cout << "ano " << i << "\t R$" << inicial << '\n';
        inicial = (inicial * 1.05);
        i++;
    }

    // std::cout << "o valor de 10000 com redimento de 5% a.a. dobrará de valor em " << i << " anos\n";
    // std::cout << "valor final = " << inicial;
    return 0;
}
