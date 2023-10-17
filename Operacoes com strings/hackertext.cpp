#include <iostream>
#include <string>
 
int main()
{
    std::string str("The quick brown fox jumps over the lazy dog.");
 
 for(int i=0;i<str.length();i++)
    switch (str[i])
    {
    case 'a':
        str.replace(i, 1, "4");
        break;
    case 'i':
        str.replace(i, 1, "1");
        break;
    case 'o':
        str.replace(i, 1, "0");
        break;
    case 's':
        str.replace(i, 1, "5");
        break;
    case 'z':
        str.replace(i, 1, "2");
        break;            
    default:
        break;
    }
//    if (str[i]=='a')
//    {
//
//    }
    
 
/*
    str.replace(str.begin(), str.begin() + 3, 1, 'A'); // (5)
*/
 
    std::cout << str << '\n';
}