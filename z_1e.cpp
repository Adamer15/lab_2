#include <iostream>
void zad_1e()
{
    using namespace std;
    int n;
    double suma = 0;
    cout << "Podaj liczbe elementow ciagu: ";
    cin >> n;
    for (int i = 1; i <= n; i++){
        suma += (1.0/(3.0*i + 1.0));
    }
    cout << suma << endl;
}
int main ()
{
    zad_1e();
    return 0;
}