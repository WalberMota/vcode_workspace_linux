#include <iostream>
#include <string>
 
int main()
{
    std::string str("The quest for perfection is an endless journey many of us have been on for as long as we can remember. We somehow think our mistakes or shortcomings are failures or make us “less than” rather than viewing them as lessons to be learned unique to us as individuals.");
 
 for(int i=0;i<str.length();i++)
    switch (str[i])
    {
    case 'a'|'A':
        str.replace(i, 1, "4");
        break;
    case 'i'|'I':
        str.replace(i, 1, "1");
        break;
    case 'o'|'O':
        str.replace(i, 1, "0");
        break;
    case 's'|'S':
        str.replace(i, 1, "5");
        break;
    case 'z'|'Z':
        str.replace(i, 1, "2");
        break;
    case 'e'|'E':
        str.replace(i, 1, "3");
        break;
    case 't'|'T':
        str.replace(i, 1, "7");
        break;
    case 'b'|'B':
        str.replace(i, 1, "8");
        break;
    case 'q'|'Q':
        str.replace(i, 1, "9");
        break;
    case 'g'|'G':
        str.replace(i, 1, "6");
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