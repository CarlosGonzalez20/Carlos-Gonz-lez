#include <iostream>

using namespace std;

void print (string messege)
{
    cout << messege << endl;
}
void printb (float mensaje)
{
    cout << mensaje << endl;
}

float Suma(float num1, float num2)
{
    return num1+num2;
}

float Resta (float num1,float num2)
{
    return num1-num2;
}

float Div (float num1,float num2)
{
    return num1/num2;
}

float Mul (float num1,float num2)
{
    return num1*num2;
}

int main()
{
    float num1,num2;
    print("Crated by Carlos Gonzalez");
    print("9959-20-6164");
    print("Ingrese el primer numero: ");
    cin >> num1;
    print("ingrese el segundo numero: ");
    cin >> num2;
    float OSuma = Suma(num1,num2);
    float ORes = Resta(num1,num2);
    float ODiv = Div(num1,num2);
    float OMul = Mul(num1,num2);
    print("la suma de los numeros es: ");
    printb(OSuma);
    print("la resta de los numeros es: ");
    printb(ORes);
    print("la division de los numeros es: ");
    printb(ODiv);
    print("la multiplicacion de los numeros es: ");
    printb(OMul);
    return 0;
}
