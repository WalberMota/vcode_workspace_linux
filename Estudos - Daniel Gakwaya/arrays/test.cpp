#include <iostream>

int main(int argc, char const *argv[])
{
    int data[]{1, 2, 4, 5, 1, 8, 2, 3, 6, 1, 4, 2};
    int select[]{};
    int numero;
    
    select[0]=data[0];
    
    for (int i=0;i<12;i++)
    {
        if (select[0]!=data[i+1])
        {
            select[i+1]=data[i+1];
        }
    }        
    //ler select[]
    for (size_t i{0}; i < 12; i++)
    std::cout << select[i] << '\n';

    
    return 0;
}
