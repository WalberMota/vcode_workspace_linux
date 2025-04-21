#include<iostream>
#include<cstdlib> /*srand, rand*/
#include<ctime>



int main()
{
    std::srand(std::time(nullptr));
    std::cout <<std::time(nullptr)<<std::endl;
    int result=std::rand();
    std::cout << "número: "<<result<<std::endl;
    std::cout << "RAND_MAX = "<< RAND_MAX<<std::endl;

    return 0;
}
