/*usando strftime*/
# include <iostream>
# include <time.h>


int main(int argc, char const *argv[])
{
    time_t tempo;

    struct tm *informatempo;

    char memoria[80];

    time (&tempo);

    informatempo = localtime (&tempo);

    strftime (memoria,80,"Agora são %M:%p",informatempo);
    


    return 0;
}
