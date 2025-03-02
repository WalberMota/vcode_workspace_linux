#include <iostream>

int data[]{1, 2, 4, 5, 1, 8, 2, 3, 6, 1, 4, 2};
int seleciona[]{0};
int tamanho;

int main()
{
    seleciona[0] = data[0];
    tamanho=sizeof(seleciona)/4;

    for(int x=0;x<sizeof(data)/4;x++)
    {
        for (int i=0;i<tamanho;i++){
            if (seleciona[i]==data[x]){
            
            }
            else{
                seleciona[i+1]=data[x];
                tamanho=sizeof(seleciona)/4;
            }

        }

    }
    
    for (size_t i{0}; i < 13; i++)
    {
        std::cout << seleciona[i] << " ";
    }
    return 0;
}
