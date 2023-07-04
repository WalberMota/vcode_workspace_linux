#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::to_string;

int main()
{
    string str_01 = "Esta String será unida com uma variavel int com valor ";
    string str_02 = "Esta será unida com uma variavel float com valor ";
    int number1 = 12345;
    float number2 = 12.345;
    cout << str_01 << "\n"<<str_02<<endl;
    str_01 += to_string(number1);
    str_02 += to_string(number2);
    cout << str_01 << endl;
    cout << str_02 << endl;
    return EXIT_SUCCESS;
}