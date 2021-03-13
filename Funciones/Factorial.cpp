#include<iostream>

using namespace std;

int a,b,factorial;

int main()
{
    cout << "Introduzca un numero: ";
    cin >> a;
    factorial = 1;
    for (b=1;b<=a;b++)
    {
        factorial=b*factorial;
    }
    cout << "El factorial de " << a << " es: " << factorial;
    return 0;
}
