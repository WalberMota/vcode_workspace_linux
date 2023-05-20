#include <cstdint>
#include <iostream>
#include <iomanip>

using namespace std;

char *pc;
int64_t i, *pi;

int main()
{
    i = 72623859790382856;
    pi = &i;
    pc = reinterpret_cast<char *>(pi);

    cout << dec << "i =  " << i << " => (base 10) " << endl;
    cout << hex << "i =   " << setw(16) << setfill('0') << i;
    cout << " => (base 16) " << endl
         << endl;
    cout << "ENDEREÇO          BYTE" << endl
         << endl;

    cout << hex << setfill('0') << uppercase;
    for (int n = 1; n <= 8; ++n)
    {
        cout << setw(8) << reinterpret_cast<unsigned int *>(pc) << "      ";
        cout << setw(2) << static_cast<unsigned int>(*pc) << endl;
        ++pc;
    }
    return 0;
}