#include <iostream>

int fib (int n)
{
  if (n <= 2)  /* Isto evita recursividade infinita. */
    return 1;
  else
    return fib (n - 1) + fib (n - 2);
}

int main (void)
{
  std::cout <<"O item 20 da série de Fibonacci é " << fib (20);
  return 0;
}