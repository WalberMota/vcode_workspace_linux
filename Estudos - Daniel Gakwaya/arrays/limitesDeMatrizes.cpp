#include<iostream>

char numeros1[]{1,2,3,4};
int numeros2[]{1,2,3,4};

int main()
{
    std::cout << "Tamanho do char(numeros1): "<<sizeof(numeros1)<<" elementos.";
    std::cout << "Tamanho do int (numeros2): "<<sizeof(numeros2)<<" bytes.";

    return 0;
}
