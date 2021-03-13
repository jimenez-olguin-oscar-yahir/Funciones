#include<iostream>

using namespace std;

int Max (int a, int b, int c);

int main()
{
    int a,b,c,d;
    cout<<"Introduce el primer numero: ";
    cin>>a;
    cout<<"Introduce el segundo numero: ";
    cin>>b;
    cout<<"Introduce el tercer numero: ";
    cin>>c;
    d=Max(a,b,c);
    cout<<"El numero mayor es: " << d;
    return 0;
}

int Max (int a, int b, int c)
{
    int d;

    if (a>b)
    {
        if (a>c)
        {
            d=a;
        }
        else
            d=c;
    }
    else
        if (b>c)
        {
            d=b;
        }
        else
            d=c;
    return d;
}

