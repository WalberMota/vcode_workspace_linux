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
  std::cout <<"O item 20 da série de Fibonacci é " << fib (2);
  return 0;
}

/* - FIBONACCI ITERATIVA
int
fib (int n)
{
  int ultimo = 1;   // O valor inicial é fib (1).  
  int anterior = 0;   // O valor inicial controla fib (2). 
  int i;

  for (i = 1; i < n; ++i) // Se n é 1 ou menos, a repetição executa zero vezes 
                          // já que i < n é falso logo na primeira vez. 
    {
      // Agora ultimo é fib (i)
      // e anterior é fib (i - 1). 
      // Calcula fib (i + 1).  
      int proximo = anterior + ultimo;
      // Troca os valores.  
      anterior = ultimo;
      ultimo = proximo;
      // Agora ultimo é fib (i + 1)
         //e anterior é fib (i).
         //Mas isso não vai ficar assim por muito tempo
         //porque estamos prestes a incrementar i. 
    }

  return ultimo;
}

*/