#include <string.h>
#include <stdio.h>
 
void demo(const char* lhs, const char* rhs)
{
    int rc = strcmp(lhs, rhs);
    //const char *rel = rc < 0 ? "precedes" : rc > 0 ? "follows" : "equals";
    const char *rel="-"; //rel é uma constante string
    if (rc<0)
    {
        printf("%s %s %s\n", lhs,rel, rhs);
    }
    //printf("%s %s %s\n", lhs, rel, rhs);
    else
    {
        printf("%s %s %s\n", rhs, rel, lhs);
    }
}
 
int main(void)
{
    const char* string1 = "Josefa";
    const char* string2 = "Jasefa";
    demo(string1, string2);
    
    //demo(string, "Hello");
    //demo(string, "Hello there");
    //demo("Hello, everybody!" + 12, "Hello, somebody!" + 11);
}
