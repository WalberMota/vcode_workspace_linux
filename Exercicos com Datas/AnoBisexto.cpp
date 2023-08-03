/*
Programa:
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 11/07/2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito: Dado um ano qualquer o programa dirá se este ano foi bisexto ou não
*/

#include <iostream>

using namespace std;

int main()
    {
    int ano;

    cout<<"====Verificador de ano bisexto =====\n";
    cout<<"\nDigite o ano desejado: ";
    cin>>ano;

    cout<<(((ano%4==0 && ano%100 !=0)||(ano%400==0))? "\nAno bisexto":"\nAno não bisexto");

    return 0;

    }
