//Aritmetica de apuntadores para variable simples
#include <iostream>

using namespace std;
int main()
{
    int x=5;
    int *xPtr;
    xPtr=&x;

    cout<<"Valor de x llamada a la viariable:    "<<x<<endl;
    cout<<"Valor de x llamada a la apuntador:    "<<*xPtr<<endl;
    cout<<"Direccion de x:                       "<<&x<<endl;
    cout<<"Direccion de x llamando al apuntador: "<<xPtr<<endl;
    cout<<"Direccion de x con operadores de direccion e indireccion "<<&*xPtr<<endl;
    cout<<"Direccion de x con operadores de direccion e indireccion "<<*&xPtr<<endl;
    system("pause");

    return 0;
}
