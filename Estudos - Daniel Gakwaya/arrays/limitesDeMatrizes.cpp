#include<iostream>

char numeros1[]{1,2,3,4};
int numeros2[]{1,2,3,4};

int main()
{
    std::cout << "\nTamanho do char(numeros1): "<<sizeof(numeros1)<<" elementos.";
    std::cout << "\nTamanho do int (numeros2): "<<sizeof(numeros2)<<" bytes."<<std::endl;

    std::cout<<"char numero1= " ;
    for(auto num:numeros1){
        std::cout << toascii(num)<<",";
    }
    
    std::cout << "\nEndereço de int numero2: "<< numeros2<< std::endl;

    //std::cout <<numeros2[2000]<<std::endl;//gera segmentation fault

    return 0;
}
