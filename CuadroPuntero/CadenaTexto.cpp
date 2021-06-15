//Convertir la cadena texto "esTRucTura de dATOs" a mayuscula utilizando apuntadores
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{
    char cadena [] = "esTrucTura de  dATOs"; 
    strupr(cadena);
    char *cadenaPtr;
    cadenaPtr=&cadena;
    cout<<"el nombre correcto es"<<*cadenaPtr;
    return 0;
}
