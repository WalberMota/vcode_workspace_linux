#include <iostream>
#include <string>
 
int main()
{
    std::string str("E busca pela perfeicao");
 
 for(int i=0;i<str.length();i++)
    switch (str[i])
    {
    case 'z'|'Z':
        str.replace(i, 1, "p");
        break;
    case 'e'|'E':
        str.replace(i, 1, "o");
        break;
    case 'n'|'N':
        str.replace(i, 1, "l");
        break;
    case 'i'|'I':
        str.replace(i, 1, "a");
        break;
    case 't'|'T':
        str.replace(i, 1, "r");
        break;
    case 'p'|'P':
        str.replace(i, 1, "z");
        break;
    case 'o'|'O':
        str.replace(i, 1, "e");
        break;
    case 'l'|'L':
        str.replace(i, 1, "n");
        break;
    case 'a'|'A':
        str.replace(i, 1, "i");
        break;
    case 'r'|'R':
        str.replace(i, 1, "t");
        break;
    default:
        break;
    }
/*
    if (str[i]=='a')
    {

    }
    
 

    str.replace(str.begin(), str.begin() + 3, 1, 'A');
*/
 
    std::cout << str << '\n';



}