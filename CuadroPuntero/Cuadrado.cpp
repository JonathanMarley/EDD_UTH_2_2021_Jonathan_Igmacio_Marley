//Leer un numero entero, calcular el cuadrado e imprimirlo utilizando apuntadores
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num=5,cuadrado;
    int *numPtr;
    numPtr=&num;
    cuadrado = pow(*numPtr,2);
    cout<<"Cuadrado del numero "<<*numPtr<< " es "<<cuadrado<<endl;
    system("pause");
    return 0;
}

