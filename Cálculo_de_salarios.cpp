#include "iostream"
using namespace std;

float S_TOTAL (float h_trabajadas, float h_extras) // Función para calcular el salario total 
{
   float s_total = (h_trabajadas*1.75)+(h_extras*2.50); // $1.75 cada hora normal y $2.50 cada hora extra
   return s_total;
}

float S_REAL (float s_total, float h_trabajadas, float h_extras) // Función para calcular el salario real
{
    float s_real = S_TOTAL(h_trabajadas, h_extras)-(S_TOTAL(h_trabajadas, h_extras)*0.0625)-(S_TOTAL(h_trabajadas, h_extras)*0.04); // Descuento AFP y Seguro Social
    if (S_TOTAL(h_trabajadas, h_extras) > 500)
        s_real = s_real - (S_TOTAL(h_trabajadas, h_extras)*0.1); // Descuento Renta (Solo para Salarios totales mayores a $500)
    return s_real;
}

int main()
{
    float h_trabajadas, h_extras, s_total, s_real;
    cout << endl;
    cout << "Ingrese el numero de horas trabajadas: ";
    cin >> h_trabajadas;
    cout << "Ingrese el numero de horas extra: ";
    cin >> h_extras;
    cout << "Su salario total es: $" << S_TOTAL(h_trabajadas, h_extras) << endl;
    cout << "Su salario real es: $" << S_REAL(s_total, h_trabajadas, h_extras) << endl;
}

