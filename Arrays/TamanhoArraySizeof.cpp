#include <iostream>

void MostrarVetor(int Array[], int TamVetor);


int main()
{
    int Vetor[] = { 1, 2, 3, 4, 5, 6, 7,8, 9, 10 };

    std::cout << "\nArray em C/C++:\n";
    std::cout << " Um array é uma coleção de um ou mais objetos, do mesmo tipo, armazenados em\nendereços adjacentes de memória. Cada objeto é chamado de elemento do array.\n";
    /*sizeof devolve o número em Bytes do tamanho de uma variável ou tipo(int, float, double,etc.)
    logo sizeof(Vetor) vai devolver o numero de elementos do vetor multiplicado pelo tamanho de seu tipo
    pois são gastos 4bytes por cada int neste vetor e como são 10 elementos o vetor terá tamanho 40bytes
    Para saber o numero de elementos é necessário dividir o 'sizeof' do vetor pelo 'sizeof' do tipo do vetor*/
    int TamVct = sizeof(Vetor)/sizeof(int);
    std::cout <<"=============================================================================";

    std::cout << "\n\nExemplo, array = [";
    /*std::cout << "\nTamanho de um float " << sizeof(float);
    std::cout << "\nTamanho de um int " << sizeof(int);*/
    MostrarVetor(Vetor,TamVct);
    std::cout << "]\n";

    /*Agora serão 40 bytes / 4 bytes = 10 a quantidade de elementos dentro do vetor!*/

    std::cout << "\nNúmero de elementos do array: " << TamVct << " elementos do tipo 'int'.\n";
    std::cout << "\nUm tipo 'int' nesta arquitetura de 64bits ocupa: " << sizeof(int)<<" bytes na memoria RAM\n";
    std::cout << "\nLogo o tamanho total em bytes deste array será de "<<sizeof(Vetor) << " bytes.\n\n";

    return 0;
}


void MostrarVetor(int Array[],int TamVetor)
{

    for(int i=0; i<TamVetor; i++)
    {
        std::cout<<Array[i]<<" ";
    }

}
