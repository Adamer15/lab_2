#include<iostream>
double silnia(double n)
{
    double sil = 1;
    for (int i = 1; i <= n; i++)
        sil *= i;
    return sil;
}
double dwumian(double n, double k)
{
    return silnia(n)/(silnia(n-k) * silnia(k));
}
void pascal(double n)
{
    using namespace std;
    // n - liczba wierszy
    // i - wskazywany wiersz
    // j - pozycja liczby w wierszu i
    cout<<"1\n";
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
            cout << dwumian(i, j) << " ";
        cout << endl;
    }
}
void pascal_wyk()
{
    double x;
    std::cout << "Podaj poziom trojkata Pascala: ";
    std::cin >> x;
    pascal(x);

}
int main ()
{
    pascal_wyk();
    return 0;
}