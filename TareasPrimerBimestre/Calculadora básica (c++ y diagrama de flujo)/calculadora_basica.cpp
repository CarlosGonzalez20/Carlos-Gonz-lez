#include <iostream>

using namespace std;

int main()
{
    float numero1, numero2;
    string math=" ";
    cout << endl;
    cout << "        ==== CALCULADORA BASICA ====" << endl;
    cout << "  created by Carlos Gonzalez, 9959-20-6164" << endl;
    cout << endl <<"Introduce el primer numero: " << endl;
    cin >> numero1;
    cout << endl << "Introduce el segundo numero: " << endl;
    cin >> numero2;
    cout << endl << "        ¿Que operacion desea realizar? (suma, resta, multiplicacion o division)" << endl;
    cin >> math;
    if(math == "suma" )
    {
        cout << endl << "La suma de los dos numeros es: " << numero1+numero2 << endl;
    }
    else if(math == "resta" )
    {
        cout << endl << "La resta de los dos números es: " << numero1-numero2 << endl;
    }
    else if(math == "multiplicacion" )
    {
        cout << endl << "La multiplicacion de los dos numeros es: " << numero1*numero2 << endl;
    }
    else if(math == "division")
    {
        cout << endl << "La dvision de los dos numeros es: " << numero1/numero2 << endl;
    }
    return 0;
}
