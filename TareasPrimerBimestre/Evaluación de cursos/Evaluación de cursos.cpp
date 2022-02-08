#include <iostream>

using namespace std;

int main()
{
    float curso1, curso2, curso3, curso4, curso5;
    string cur1, cur2, cur3, cur4, cur5;
    cout << endl;
    cout << "==Bienvenido a la evaluacion de cursos==" << endl;
    cout << "=======Created by Carlos Gonzalez=======" << endl;
    cout << endl;
    cout << "Ingrese el nombre del primer curso: ";
    cin >> cur1;
    cout << "Ingrese el nombre del segundo curso: ";
    cin >> cur2;
    cout << "Ingrese el nombre del tercer curso: ";
    cin >> cur3;
    cout << "Ingrese el nombre del cuarto curso: ";
    cin >> cur4;
    cout << "Ingrese el nombre del quinto curso: ";
    cin >> cur5;
    cout << endl;
    cout << "ingrese la nota de " << cur1 << ": ";
    cin >> curso1;
    cout << "ingrese la nota de " << cur2 << ": ";
    cin >> curso2;
    cout << "ingrese la nota de " << cur3 << ": ";
    cin >> curso3;
    cout << "ingrese la nota de " << cur4 << ": ";
    cin >> curso4;
    cout << "ingrese la nota de " << cur5 << ": ";
    cin >> curso5;
    cout << endl;
    cout << "=====Evaluando " << cur1 << "=====" << endl;
    if (curso1>=80)
    {
        cout << "     　Felicidades!! gano con " << curso1 << " puntos" << endl;
    }
    else if (curso1>=61)
    {
        cout << "     Gano, pero puede mejorar, con " << curso1 << " puntos" << endl;
    }
    else if (curso1==60)
    {
        cout << "     Casi lo logra, cerca de ganar con " << curso1 << " puntos" << endl;
    }
    else
    {
        cout << "     Perdio, no llego a la nota minima, con " << curso1 << " puntos" << endl;
    }
    cout << endl;
    cout << "=====Evaluando " << cur2 << "=====" << endl;
    if (curso2>=80)
    {
        cout << "     　Felicidades!! gano con " << curso2 << " puntos" << endl;
    }
    else if (curso2>=61)
    {
        cout << "     Gano, pero puede mejorar, con " << curso2 << " puntos"  << endl;
    }
    else if (curso2==60)
    {
        cout << "     Casi lo logra, cerca de ganar con " << curso2 << " puntos"  << endl;
    }
    else
    {
        cout << "     Perdio, no llego a la nota, con " << curso2 << " puntos"  << endl;
    }
    cout << endl;
    cout << "=====Evaluando " << cur3 << "=====" << endl;
    if (curso3>=80)
    {
        cout << "     　Felicidades!! gano con " << curso3 << " puntos"  << endl;
    }
    else if (curso3>=61)
    {
        cout << "     Gano, pero puede mejorar, con " << curso3 << " puntos" << endl;
    }
    else if (curso3==60)
    {
        cout << "     Casi lo logra, cerca de ganar con " << curso3 << " puntos" << endl;
    }
    else
    {
        cout << "     Perdio, no llego a la nota minima, con " << curso3 << " puntos" << endl;
    }
    cout << endl;
    cout << "=====Evaluando " << cur4 << "=====" << endl;
    if (curso4>=80)
    {
        cout << "     　Felicidades!! gano con " << curso4 << " puntos" << endl;
    }
    else if (curso4>=61)
    {
        cout << "     Gano, pero puede mejorar, con " << curso4 << " puntos" << endl;
    }
    else if (curso4==60)
    {
        cout << "     Casi lo logra, cerca de ganar con " << curso4 << " puntos" << endl;
    }
    else
    {
        cout << "     Perdio, no llego a la nota minima, con " << curso4 << " puntos" << endl;
    }
    cout << endl;
    cout << "=====Evaluando " << cur5 << "=====" << endl;
    if (curso5>=80)
    {
        cout << "     　Felicidades!! gano con " << curso5 << " puntos" << endl;
    }
    else if (curso5>=61)
    {
        cout << "     Gano, pero puede mejorar, con " << curso5 << " puntos" << endl;
    }
    else if (curso5==60)
    {
        cout << "     Casi lo logra, cerca de ganar con " << curso5 << " puntos" << endl;
    }
    else
    {
        cout << "     Perdio, no llego a la nota minima, con " << curso5 << " puntos" << endl;
    }
    return 0;
}
