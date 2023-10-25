#include <stdio.h>
void zad_1a()
{
    for (int i = 32; i <= 127; i++)
        printf("%d %c %X %o\n",i, i, i, i);
}
int main ()
{
    zad_1a();
    return 0;
}