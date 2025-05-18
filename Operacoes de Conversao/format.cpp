#include<format>
#include<iostream>
void println(std::format_string<Args...>fmt,Args&&...args)
{
    std::cout << std::format(fmt,std::format<Args>(args));
}

int main(int argc, char const *argv[])
{
    auto valor=45;
    //
    println("{0:d} {0:#b}",valor);


    return 0;
}
