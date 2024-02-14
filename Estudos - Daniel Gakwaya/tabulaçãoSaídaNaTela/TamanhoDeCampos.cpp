/*
Programa:
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 14/07/2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  Estudo de formação de campos na saida de tela
*/
#include <iostream>
#include <iomanip>//para setw e setprecision

using namespace std;

int main()
{
    float lap{1.356},bor{3.242},can{1.558},cad{8.123},pasta{15.408};
    cout<<"\n\n\n";

    cout << "\n" << "Lapis    "<< setw(10)<< setprecision(3)<<lap;
    cout << "\n" << "Borracha "<< setw(10)<< setprecision(3)<<bor;
    cout << "\n" << "Caneta   "<< setw(10)<< setprecision(3)<<can;
    cout << "\n" << "Caderno  "<< setw(10)<< setprecision(3)<<cad;
    cout << "\n" << "Pasta    "<< setw(10)<< setprecision(4)<<pasta;

    return 0;
}
