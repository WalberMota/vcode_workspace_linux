#include<iostream>

int main(int argc, char const *argv[])
{
    float inicial{10000};
    int i=1;
    float recorrente{0.0};
    do
    {
        inicial=(inicial*1.05)+recorrente;
        recorrente=100.00;
        i++;
    } while (inicial<20000);
    std::cout << "o valor de 10000 com redimento de 5% a.a. dobrará de valor em " << i << " anos\n";
    std::cout << "valor final = " << inicial;
    return 0;
}
