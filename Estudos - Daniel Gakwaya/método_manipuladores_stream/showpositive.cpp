#include<iostream>

int main(int argc, char const *argv[])
{
    int pos_num{35};
    int neg_num(-46);

    std::cout << "pos_num: " << pos_num << '\n';
    std::cout << "neg_num: " << neg_num << "\n\n";

    std::cout << std::showpos;
    std::cout << "pos_num: " << pos_num << '\n';
    std::cout << "neg_num: " << neg_num << "\n\n";

    std::cout << std::noshowpos;
    std::cout << "pos_num: " << pos_num << '\n';
    std::cout << "neg_num: " << neg_num << "\n\n";



    return 0;
}
