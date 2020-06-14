#include "iostream"
#include "string"
using namespace std;

string A_bisiesto (int a) // Función para comprobar si el año es bisiesto o no
{
    if ((a%400==0)||(a%4==0 && a%100!=0)) // Si es divisible entre 400 o divisible entre 4 pero no entre 100
    {
        return "Si es bisiesto";
    }
    else
        return "No es bisiesto";
}

int main ()
{
    int a;
    cout << "Ingrese el año a comprobar ";
    cin >> a;

    cout << a << " " << A_bisiesto(a);
}