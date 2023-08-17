/*
Autor: Walber Mota
Data da Criação: 10/08/2023
Objetivos: Calcula os numeros primos entre 1 e um determinado número ℕ (ℤ+)
Linguagem: C/C++
*/

#include <iostream>
using namespace std;

int main()
    {
    int limite;
    int regrt{0};
    cout <<"Calcula os m=numeros primos abaixo de um determinado valor\nDigite o valor = ";
    cin >>limite;
    system("clear");
    cout<<"Os números primos ente 1 e "<<limite<<" são:\n";

    int temp=0;

    for (int numpri=1; numpri<=limite; numpri++)
        {
        int flag=1;
        for (int x=2; x<=numpri; x++)
            {

            if(numpri%x == 0 && flag==1)
                {
                flag=flag+1;
                if (numpri==x)
                    {
                    cout << numpri<<", ";
                    regrt++;
                    }
                }
            }

        }
    cout <<"\n\n"<<"Total de números primos encontrados: "<<regrt<<"\n";
    return 0;
    }

