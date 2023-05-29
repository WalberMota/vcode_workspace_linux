/*
Autor: Walber Mota
Data da Criação: 28/05/2023
Linguagem:C/C++
Objetivos: Criar um vetor unidimensional (array) de no máximo 20 números e
            determinar qual o valor mais alto e mínimo do vetor
*/

#include<iostream>

int main()
{
    int NumElementos;
    int Vetor[20];
    int Min=0;
    int Max=0;

    std::cout<<"Digite o numero de elementos desejados(máx 20):";
    std::cin>>NumElementos;
    system("clear");

    for (int i=0; i<NumElementos; i++)
    {
        std::cout <<"Digite o elemento "<<(i+1)<<": ";
        std::cin>>Vetor[i];

        system("clear");

    };
    std::cout << "\nVetor[";
    for(int i=0; i<NumElementos; i++)
    {
        std::cout <<Vetor[i];
        if (i<(NumElementos-1)) std::cout<<",";

    }
    std::cout <<"]\n";

    Max=Vetor[0];//inicializa as variáveis Max e Min com
    Min=Vetor[0];//o valor do primeiro elemento do array.

    for(int i=0; i<NumElementos; i++)
    {
        if (Vetor[i]>Max)
            Max=Vetor[i];
        else if(Vetor[i]<Min)
            Min=Vetor[i];

    }
    std::cout<<"\nMaior número do vetor: "<<Max;
    std::cout<<"\nMenor número do vetor: "<<Min<<"\n";
    return 0;

}
