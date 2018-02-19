#include <iostream>
#include <cmath>
#include <stdio.h>
#define PI 3.14159265359
using namespace std;

int main()
{
    float A , r;


    cout << "Ingrese radio en centimetros: " ;
        cin >> r;
        A=PI*pow(r,2);
     cout << "El area del circulo es: " << A  ;

     if (A>5000)
     {


        cout << "Datos erroneos";

}

    return 0;
}
