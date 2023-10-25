#include <iostream>
double f_maks(double a, double b)
{
    if (a >= b)
        return a;
    else return b;
}
double f_mini(double a, double b)
{
    if (a <= b)
        return a;
    else return b;
}
void zad_1d()
{
    using namespace std;
    double maks = 0, mini = 999999999, suma = 0, n;
    cout << "Podaj 10 liczb: ";
    for (int i = 0; i < 10; i++){
        cin >> n;
        suma += n;
        maks = f_maks(maks, n);
        mini = f_mini(mini, n);
    }
    double srednia = suma/10.0;
    printf("Srednia: %lf\nSuma: %lf\nWartosc minimalna: %lf\nWartosc najwieksza: %lf", srednia, suma, mini, maks);
}
int main ()
{
    zad_1d();
    return 0;
}