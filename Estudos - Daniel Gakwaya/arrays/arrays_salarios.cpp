#include <iostream>

int main(int argc, char const *argv[])
{
    double salarios[5]{12.7,7.5,13.2,8.1,9.3};

    //lendo o arrays
    for(size_t i=0;i<5;i++)
    {
        std::cout <<"salario["<<i<<"]:" << salarios[i]<<std::endl;
    }

    return 0;
}




