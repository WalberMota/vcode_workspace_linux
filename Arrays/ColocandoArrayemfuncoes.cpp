/*
Autor:Walber Mota
Linguagem: C++
Criado em 29/05/2023
Colocando Array dentro de uma função
*/

#include<iostream>

void MostrarVetor(int Array[],int TamVetor);
void Separador(int i);

int i=0;

int main()
{
    int Vetor[]= {1,2,3,4,5,6,7,8,9,10};
    //para enviar um vetor para uma função bastar colocar somente o nome do vetor.
    //Aqui no caso Vetor e seu tamanho(10) vão para o argumento da função:
    //   MostrarVetor(int Array[],int TamVetor)

    MostrarVetor(Vetor,10);

    return 0;

}

//para a função receber um vetor basta colocar o tipo+nome do vetor e os colchetes vazios ou com o tamanho]
//ex.: int Vetor[20] ou int Vetor[], o usual são os colchetes vazios.
void MostrarVetor(int Array[],int TamVetor)
{
   std::cout<<"\nVetor[";
    for(int i=0; i<TamVetor; i++)
    {

        std::cout<<Array[i];
        Separador(i);

    }
   std::cout<<"]\n\n";
}

void Separador(int i)
{
    if (i<9)
    {
        std::cout<<",";
    }
}
