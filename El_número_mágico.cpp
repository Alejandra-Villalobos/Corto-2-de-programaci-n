#include "iostream"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "string"
using namespace std;

    
string Correcto(int numero) // Mensaje a mostrar si el número es correcto
{
    return "Adivinaste!";
}
string Mayor(int numero) //Mensaje a mostrar si el número es mayor al correcto
{
    return "Incorrecto. Pista: Ingresa un numero menor. ";
}
string Menor(int numero) //Mensaje a mostrar si el número es menor al correcto
{
    return "Incorrecto. Pista: Ingresa un numero mayor. ";
}

int main()
{
    int numero, i;
    cout << "Adivine el numero secreto entre 1 y 100. Tienes 5 intentos!" << endl;
   
    srand(time(NULL));
    int n_magico  = 1+rand()%(101-1); //Elige un número al azar entre 1 y 100
    //cout << n_magico; para ver el número secreto
   
    for (i=5;i>=1;i--) //Permite solo 5 intentos
    {
        cin >> numero;
        if (numero==n_magico)
        {
            cout << Correcto(numero);
            break;
        }
        else if (i!=1 && ((numero > n_magico) && (numero <=100)))
            cout << Mayor(numero) << "Te quedan " << i-1 << " intentos. Pulsa un numero fuera del rango para dejar de jugar"<< endl;
        else if (i!=1 && ((numero < n_magico) && (numero >=1)))
            cout << Menor(numero) << "Te quedan " << i-1 << " intentos. Pulsa un numero fuera del rango para dejar de jugar"<< endl;
        else if ((numero <1) || (numero>100)) //Para salir del juego
        {
            cout << "Fin de la partida";
            break;
        }          
        if ((i==1)&&(numero!=n_magico)) //En caso de ser el último intento y no haber adivinado
        cout << "Incorrecto. Fin de la partida";

    }
}