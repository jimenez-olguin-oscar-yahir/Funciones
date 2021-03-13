#include <iostream>

using namespace std;

int Max (int a, int b);

int main()
{
    int a, b, c;
    cout << "Introduzca el valor del primer numero: ";
    cin >> a;
    cout << "Introduzca el valor del segundo numero: ";
    cin >> b;

    c=Max(a,b);
    cout << "El numero mayor es: " << c;

    return 0;
}

int Max (int a, int b)
{
    int c;
    if(a>b)
    {
        c=a;
    }
    else if (a<b)
    {
        c=b;
    }
    else
    {
        cout << "son iguales  ";
    }
    return c;
}
