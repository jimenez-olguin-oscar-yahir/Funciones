#include <iostream>

using namespace std;

int Suma(int a, int b);

int main()
{
    int a, b;
    cout << "Introduzca el valor del primer operando: ";
    cin >> a;
    cout << "Introduzca el valor del segundo operando: ";
    cin >> b;

    int resultado = Suma(a,b);
    cout << "El resultado es: " << resultado;

}

int Suma(int a, int b)
{
    return a + b;
}
