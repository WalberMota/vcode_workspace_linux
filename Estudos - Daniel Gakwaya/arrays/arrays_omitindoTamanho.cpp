# include <iostream>

int main(int argc, char const *argv[])
{
    int turma[]{10,12,15,11,18,17};

    for(auto valor:turma){
        std::cout <<"valor: "<<valor<<std::endl;
    }
    return 0;
}
