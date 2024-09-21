/*
Rotina desenvolvida à partir de:
   C++ checkdate function for date validation
   http://www.zedwood.com/article/cpp-checkdate-function-date-validation


*/

#include <string>
#include <iostream>
 
using namespace std;
 
bool checkdate(int m, int d, int y);
 
int main(int argc, char* argv[])
{
  cout << checkdate( 1, 1, 2005) << endl; // 1=true
  cout << checkdate( 0, 1, 2005) << endl; // 0=false
  cout << checkdate(13, 1, 2005) << endl; // 0
  cout << checkdate( 2,29, 1992) << endl; // 1
  cout << checkdate( 2,29, 1996) << endl; // 1
  cout << checkdate( 2,29, 2000) << endl; // 1
  cout << checkdate( 2,29, 2001) << endl; // 0
  cout << checkdate( 2,29, 2002) << endl; // 0
  cout << checkdate( 2,29, 2003) << endl; // 0
  cout << checkdate( 2,29, 2004) << endl; // 1
  cout << checkdate( 2,29, 2100) << endl; // 0
  cout << checkdate( 2,29, 2200) << endl; // 0
  cout << checkdate( 2,29, 2300) << endl; // 0
  cout << checkdate( 2,29, 2400) << endl; // 1
  cout << checkdate( 2,29, 2500) << endl; // 0
  return 0;
}
 
bool checkdate(int m, int d, int y)
{
  //gregorian dates started in 1582
  if (! (1582<= y )  )//comment these 2 lines out if it bothers you
     return false;
  if (! (1<= m && m<=12) )
     return false;
  if (! (1<= d && d<=31) )
     return false;
  if ( (d==31) && (m==2 || m==4 || m==6 || m==9 || m==11) )
     return false;
  if ( (d==30) && (m==2) )
     return false;
  if ( (m==2) && (d==29) && (y%4!=0) )
     return false;
  if ( (m==2) && (d==29) && (y%400==0) )
     return true;
  if ( (m==2) && (d==29) && (y%100==0) )
     return false;
  if ( (m==2) && (d==29) && (y%4==0)  )
     return true;
 
  return true;
}