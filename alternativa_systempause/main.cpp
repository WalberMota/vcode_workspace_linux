#include<iostream>

int main()
    {

    int totalfunc{0};


    do
        {
        std::cout<<"Digite o numero de funcionários\n";
        std::cin>>totalfunc;
        if (totalfunc<0)
            {
                printf("\n\nNúmero inválido!\n Tecle <ENTER> para outro valor...\n");
                getchar();
                scanf("c\n");

                system("clear");
            }
        }
    while(totalfunc<0);

    std::cout<<"\n\ntotal de funcionários: "<<totalfunc;

    return 0;

    }
