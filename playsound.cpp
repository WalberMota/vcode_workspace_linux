#include <iostream>
#include <windows.h>
 
using namespace std;
 
int main()
{
	PlaySound(TEXT("piano.wav"), NULL, SND_FILENAME | SND_ASYNC);
	return 0;
}