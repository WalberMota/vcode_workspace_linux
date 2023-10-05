#include <iostream>
#include "sha1.h"
#include <string>


using namespace std;

string texto;


int main(int argc, char *argv[])
{
	cout<<"Digite o texto para gerar SHA1: ";
	getline(cin,texto);

    cout << "sha1(texto):" << sha1(texto) << endl;
    return 0;
}
