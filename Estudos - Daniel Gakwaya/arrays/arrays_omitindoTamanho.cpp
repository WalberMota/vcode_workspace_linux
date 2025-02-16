# include <iostream>

int main(int argc, char const *argv[])
{
    int turma[]{10,12,15,11,18,17};
/*
Para que a matriz do array não seja modificada pode usar:
const int turma[]{10,12,15,11,18,17}
*/

//ler os valores do array
for(auto valor:turma){
        std::cout <<"valor: "<<valor<<std::endl;
    }
    return 0;
}
