#include <iostream>

int main(int argc, char const *argv[])
{
    int incremento{5};
    int numero1{10};
    int numero2{20};
    int numero3{25};

    int resultado = (numero1 *= ++incremento, numero2 -= (++incremento), numero3 += ++incremento);

    std::cout << numero1 << '\n';
    std::cout << numero2 << '\n';
    std::cout << numero3 << '\n';
    std::cout << resultado << '\n';
    return 0;
}
