#include <iostream>
using namespace std;

int main() 
{
    int sobra;
    int dig;
    int modulo=10000;
    int num = 42339;
    cout<< "insira um numero de cinco dígitos"<<endl;
    cin >>num;
separa:
        dig = num % modulo; // módulo (resto da divisão) por 10
        sobra = int(num / modulo); // divisão inteira por 10
        modulo/=10;
        num=dig;
        cout <<sobra<<"   ";
        if (dig==0)
        {
            cout << endl;
            return 0;
        }
            
    goto separa;
}