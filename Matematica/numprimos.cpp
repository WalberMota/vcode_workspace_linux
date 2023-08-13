#include <iostream>
using namespace std;

int main()
{
    int limite;
    cout <<"Calcula os m=numeros primos abaixo de um determinado valor\nDigite o valor = ";
    cin >>limite;
    system("clear");
    cout<<"Os números primos ente 1 e "<<limite<<" são:\n";

    int temp=0;

    for (int contador=1; contador<=limite; contador++)
        {
        int flag=1;
        for (int x=2; x<=contador; x++)
            {

            if(contador%x == 0 && flag==1)
                {
                flag=flag+1;
                if (contador==x)
                    cout << contador<<", ";
                }
            }

        }
    cout <<"\n\n";
    return 0;
    }

