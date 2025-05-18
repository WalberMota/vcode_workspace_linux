#include<format>
#include<iostream>


int main(int argc, char const *argv[])
{
    auto valor=45;
    //std::cout << std::format(fmt,std::format<Args>(args));
    println("{0:d} {0:#b}",valor);


    return 0;
}
