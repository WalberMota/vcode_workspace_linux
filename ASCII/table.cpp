#include<iostream>
#include <iomanip>//para setw e setprecision



int main(int argc, char const *argv[])
{
    std::cout << std::right;
    std::cout << "DEC CHAR"<<'\t'<< "DEC CHAR      DEC CHAR" << '\n';
    for (int i=33;i<64;i++)
    {
        std::cout << i << " " << char(i) << "\t\t" << i+32 << "   "\
        << char(i+32)<<"\t\t" <<i+64 << "   " << char(i+64) << '\n';

    }
    return 0;
}
