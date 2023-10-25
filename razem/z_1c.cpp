#include <iostream>
#include <iomanip>
void zad_1c()
{
    for (int i = 1; i <= 11; i++)
    {
        std::cout << std::setprecision(i) << M_PI << std::endl;
    }
}
int main ()
{
    zad_1c();
    return 0;
}