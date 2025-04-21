#include<iostream>
#include<stdlib.h> /*sran, rad*/




int main()
{
    int result=std::rand();
    std::cout << "número: "<<result<<std::endl;
    std::cout << "RAND_MAX = "<< RAND_MAX<<std::endl;

    return 0;
}
