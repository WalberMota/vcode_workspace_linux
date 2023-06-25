Programa:
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 31/05/2023 
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Calculos com circulos
*/
#include<iostream>
#include<cmath>

#define pi 3.16

int main()
{
    float raio=0;
    std::string medida;

    std::cout<<"Digite o raio do circulo: ";
    std::cin>>raio;
    std::cout<<"Informe o tipo de medida(mm,cm,m) ";
    std::cin>>medida;

    std::cout<<"\n O perímetro do circulo: "<<(2*raio*pi)<<" "<<medida;
    std::cout<<"\n A área do círculo: "<<(pow(raio,2))*2*pi<<" "<<medida<<"²\n";

    return 0;
}
