//size_t : uma representação para um unsigned int para números positivos

#include <iostream>

int main(int argc, char const *argv[])
{
    size_t i{7};
    std::cout << "i = " << i <<"(" << sizeof(i) << " bytes)";
    size_t h{43};
    std::cout <<"\nh = " << h <<"(" << sizeof(h) << " bytes)";

    //uso de size_t com 'for loop'
    std::cout << "\n\n";
    for (size_t i{0};i<5;i++)
    {
        std::cout << i <<" : Eu gosto de c++\n";
    }

    return 0;
}
