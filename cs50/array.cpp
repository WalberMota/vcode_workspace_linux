#include <iostream>

int main(int argc, char const *argv[])
{
    int tamanho_array;

    do
    {
        system("clear");
        std::cout << "Digite o tamanho da ordem: ";
        std::cin >> tamanho_array;
    } while (tamanho_array<1);//garante que o tamanho seja maior que 0
    
    int array[tamanho_array];

    for (int i=0;i<tamanho_array;i++)
    {
        if (i==0)//garante que o primeiro elemento do array seja 1
        {
            array[i]=1;
        }
        else //os elementos subsequentes do array são o dobro do anterior
        {
            array[i]=array[i-1]*2;

        }
        std::cout<<"array["<<i<<"] = "<< array[i]<<"\n";
    }
    
    return 0;
}
