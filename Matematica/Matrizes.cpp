/* Autor: (Walber Mota#1#06/02/23):
Linguagem: C/C++
Objetivos : Estudo com matrizes, criação e saida em tela.
 */

#include<iostream>

int main()
{
    int Matriz[5][5];

    for (int i=0; i<5; i++)
    {

        for (int j=0; j<5; j++)
        {

            if (i<j)
            {
                Matriz[i][j]= 1;
            }

            else if (i>j)
            {

                Matriz[i][j]= -1;
            }

            else
                Matriz[i][j]= 0;



        }

    }

    for(int i=0; i<5; i++)
    {

        for (int j=0; j<5; j++)
        {
            if (i<j || i==j)
            {
               std::cout<<" "<<Matriz[i][j]<<" ";
            }
            else
                std::cout<<Matriz[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    return 0;

}
