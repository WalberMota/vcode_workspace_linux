/*
Programa:
Escrito por: Walber Mota
Linguagem: C++
Data da Criação: 11/07/2023
Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
Propósito:  
*/

#include <iostream>
#include <string>

using namespace std;

int main()
    {
    string str="Hello";
    cout<<"Strin original inicial :"<<str<<"\n\n";

    string::iterator it=str.begin();
    while(it!=str.end())
        {
        //cout<< *it <<", ";
        if (*it>='a' && *it<='z')
            {
            *it-=32;//transforma para maiusculas
            //cout<< *it <<", ";
            }
        cout<< *it <<", ";
        ++it;
        }
        cout<<"\n\n";

    string::reverse_iterator rit=str.rbegin();//no reverse_iterator o rbegin agora é o começo da string
    while(rit !=str.rend())
        {
        cout<< *rit <<", ";
        ++rit;
        }


    cout<<"\n\nstring original modificada: "<<str<<"\n\n";
    }
