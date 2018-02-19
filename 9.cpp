#include <iostream>// Biblioteca

using namespace std;// Palabras

int main()
{

    float sueldo , descuento;
    cout << "Ingrese su sueldo ";

            cin >> sueldo;

            if (sueldo<=1000)
            {
       descuento=sueldo*0.1;
    }

    else if (sueldo<=2000 )
    {
            descuento=sueldo*0.05;

    }

     else

    {
            sueldo>2000;

        descuento=sueldo*0.03;

    }
        cout << "Su descuento es:" << descuento;
    return 0;
}
