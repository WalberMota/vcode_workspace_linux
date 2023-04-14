#include <iostream>

int unidade = 0;
int dezena = 0;
int centena = 0;
int milhar = 0;

int decompor(int valor_decimal)
{
    
    if (valor_decimal > 0 && valor_decimal <= 3999)
    {
        unidade = (valor_decimal % 10);          // obtem unidade
        valor_decimal = valor_decimal - unidade; // atualiza valor de entrada
        if (valor_decimal > 9)
        {
            dezena = valor_decimal % 100;           // obtem dezena
            valor_decimal = valor_decimal - dezena; // atualiza valor de entrada
            if (valor_decimal > 99)
            {
                centena = valor_decimal % 1000;   // obtem centena
                milhar = valor_decimal - centena; // obtem milhar
            }
        }

        /* std::cout << "\n unidade = " << unidade;
        std::cout << "\n dezena = " << dezena;
        std::cout << "\n centena = " << centena;
        std::cout << "\n milhar = " << milhar; */
    }

    return 0;
}

void numeral_romano()
{
    std::cout <<"\n\n Em algarismo Romano o valor será : ";
    if (milhar == 1000)
        std::cout << "M";
    if (milhar == 2000)
        std::cout << "MM";
    if (milhar == 3000)
        std::cout << "MMM";
    if (centena == 100)
        std::cout << "C";
    if (centena == 200)
        std::cout << "CC";
    if (centena == 300)
        std::cout << "CCC";
    if (centena == 400)
        std::cout << "CD";
    if (centena == 500)
        std::cout << "D";
    if (centena == 600)
        std::cout << "DC";
    if (centena == 700)
        std::cout<<"DCC";
    if (centena==800)
        std::cout<<"DCCC";
    if (centena==900)
        std::cout<<"CM";
    if (dezena==10)
        std::cout<<"X";
    if (dezena==20)
        std::cout<<"XX";
    if (dezena==30)
        std::cout <<"XXX";
    if (dezena==40)
        std::cout<<"XL";
    if (dezena==50)
        std::cout<<"L";
    if (dezena==60)
        std::cout<<"LX";
    if (dezena==70)
        std::cout<<"LXX";
    if (dezena==80)
        std::cout<<"LXXX";
    if (dezena==90)
        std::cout<<"XC";
    if(unidade==1)
        std::cout<<"I";
    if (unidade==2)
        std::cout<<"II";
    if (unidade==3)
        std::cout<<"III";
    if (unidade==4)
        std::cout<<"IV";
    if (unidade==5)
        std::cout<<"V";
    if (unidade==6)
        std::cout<<"VI";
    if (unidade==7)
        std::cout <<"VII";
    if (unidade==8)
        std::cout<<"VIII";
    if (unidade==9)
        std::cout <<"IX";
    
}

int main()
{
    int numdec;

    std::cout << "Conversor para algaritmos Romanos - 26/03/2023\n\n";
    std::cout << "Programa experimental\n";
    std::cout << "(digite somente numeros inteiros abaixo de 4000)\n\n";
    std::cout << "digite o numero (inteiro): ";
    std::cin >> numdec;
    if (numdec < 4000)
    {
        decompor(numdec); // chama função de decomposição do numero
        numeral_romano(); // chama a função de transformar em numeral romano
        return 0;
    }
    else
    {
        std::cout << "\n\nvalor inválido!!\nSomente numeros inteiros e menores que 4000";
        return 1;
    }
}
