#include<iostream>


int main(int argc, char const *argv[])
{
    int data[]{7,5,7,2,4,1,7,4,2};
    int selecionado[]{};
    int numero{0};
    int ii{0};
    for(int num:data)
    {
        if (numero!=data[num]){
            selecionado[ii]=numero;
            numero=data[num];
            ii=ii+1;
        }
    }
    
   // std::cout <<"The collection contains 5 unique numbers, they are :";
    for(int i:selecionado)
    {
        std::cout << selecionado[i]<<" ";
    }
   
    return 0;
}
