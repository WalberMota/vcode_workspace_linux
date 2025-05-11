#include<iostream>

char numeros1[]{1,2,3,4};
int numeros2[]{1,2,3,4};

int main()
{
    std::cout << "\nTamanho do char(numeros1): "<<sizeof(numeros1)<<" elementos.";
    std::cout << "\nTamanho do int (numeros2): "<<sizeof(numeros2)<<" bytes."<<std::endl;

    return 0;
}
