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
