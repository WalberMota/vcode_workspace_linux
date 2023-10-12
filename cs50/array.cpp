#include <iostream>

int main(int argc, char const *argv[])
{
    int tamanho_array;

    do
    {
        system("clear");
        std::cout << "Digite o tamanho da ordem: ";
        std::cin >> tamanho_array;
    } while (tamanho_array<1);
    
    int array[tamanho_array];

    for (int i=0;i<tamanho_array;i++)
    {
        if (i==0)
        {
            array[i]=1;
        }
        else
        {
            array[i]=array[i-1]*2;

        }
        std::cout<<"array["<<i<<"] = "<< array[i]<<"\n";
    }
    

    return 0;
}
