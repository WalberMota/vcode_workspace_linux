#include <iostream>
void soma(int x, int y, int z)
{
    z = x + y;
}

void soma2(int *x,int *y,int *z)
{
    *z = *x + *y;
}

int main()
{

    int a = 10, b = 20, c = 0;

    soma(a, b, c);
    std::cout << "Valor de c (por valor): " << c << "\n";


    soma2(&a, &b, &c);
    std::cout << "Valor de c (por valor): " << c << "\n";
    return 0;
}

