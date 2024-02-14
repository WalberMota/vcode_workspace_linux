/* Autor:Walber Mota
 Linguagem: C++
 Criado em 23/05/2023
 Version 01.00 
locale=en_US.UTF-8,Utf16=on,HugeFiles=on,64 bits,4 CPUs Intel(R) Core(TM)
i5-5200U CPU @ 2.20GHz (306D4)
 Objetivo: Transforma um texto qualquer em um encriptação usado a chave ZENIT/POLAR
*/

#include <iostream>
#include <string>

void menu();

std::string str;

int main()
{

 menu();

 for(int i=0;i<str.length();i++)
    switch (str[i])
    {
    case 'z':
        str.replace(i, 1, "p");
        break;
    // ZENIT
    case 'Z':
        str.replace(i, 1, "P");
        break;
    case 'e':
        str.replace(i, 1, "o");
        break;
    case 'E':
        str.replace(i, 1, "O");
        break;
    case 'n':
        str.replace(i, 1, "l");
        break;
    case 'N':
        str.replace(i, 1, "L");
        break;
    case 'i':
        str.replace(i, 1, "a");
        break;
    case 'I':
        str.replace(i, 1, "A");
        break;
    case 't':
        str.replace(i, 1, "r");
        break;
    case 'T':
        str.replace(i, 1, "R");
        break;
        //POLAR
    case 'p':
        str.replace(i, 1, "z");
        break;
    case 'P':
        str.replace(i, 1, "Z");
        break;        
    case 'o':
        str.replace(i, 1, "e");
        break;
    case 'O':
        str.replace(i, 1, "E");
        break;
    case 'l':
        str.replace(i, 1, "n");
        break;
    case 'L':
        str.replace(i, 1, "N");
        break;
    case 'a':
        str.replace(i, 1, "i");
        break;
    case 'A':
        str.replace(i, 1, "I");
        break;
    case 'r':
        str.replace(i, 1, "t");
        break;
    case 'R':
        str.replace(i, 1, "T");
        break;
    default:
        break;
    }
 
    std::cout <<'\n'<< str << '\n';

}

void menu()
{
    std::cout << "###############################\n";
    std::cout << "#                             #\n";
    std::cout << "#        CONVERSOR PARA       #\n";
    std::cout << "#         ZENITPOLARNÊS       #\n";
    std::cout << "#    v.01 - 10/2023 by WSM    #\n";
    std::cout << "#                             #\n";
    std::cout << "###############################\n";
    std::cout << "\ndigite o texto : ";
    getline (std::cin,str);

}