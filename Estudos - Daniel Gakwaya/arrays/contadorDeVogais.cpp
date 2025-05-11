#include<iostream>

int main(int argc, char const *argv[])
{
    char message[] {'T','h','e',' ','s','k','y',' ' ,'i','s',' ','b','l','u','e',' ','m','y',' ','f','r','i','e','n','d'};
    
    for(auto letra:message){
        std::cout<<letra<<" ";

    }
    
    
    return 0;
}
