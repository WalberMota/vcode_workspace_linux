#include <iostream>
#include <cstring>


void minuscula(std::string str);

std::string phrase;

int main()
{
    std::string str;
    str="The quest for perfection is an endless journey many of us have been on for as long as we can remember. We somehow think our mistakes or shortcomings are failures or make us “less than” rather than viewing them as lessons to be learned unique to us as individuals.";
minuscula(str);

std::cout <<str<<'\n';

 for(int i=0;i<phrase.length();i++)
    switch (phrase[i])
    {
    case 'a':
        phrase.replace(i, 1, "4");
        break;
    case 'i':
        phrase.replace(i, 1, "1");
        break;
    case 'o':
        phrase.replace(i, 1, "0");
        break;
    case 's':
        phrase.replace(i, 1, "5");
        break;
    case 'z':
        phrase.replace(i, 1, "2");
        break;
    case 'e':
        phrase.replace(i, 1, "3");
        break;
    case 't':
        phrase.replace(i, 1, "7");
        break;
    case 'b':
        phrase.replace(i, 1, "8");
        break;
    case 'q':
        phrase.replace(i, 1, "9");
        break;
    case 'g':
        phrase.replace(i, 1, "6");
        break;
    default:
        break;
    }

    std::cout << phrase << '\n';
}


void minuscula(std::string str)
{
         for (int x = 0; x < str.length(); x++)
    {
        str[x] = char(tolower(str[x]));
    }
    phrase=str;

}
