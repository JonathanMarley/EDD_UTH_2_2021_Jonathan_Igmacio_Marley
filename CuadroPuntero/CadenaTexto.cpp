//convertir la cadena de texto "EsTruCTuRa De DaTOs a mayuscula usando punteros"
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char cadena[] = "EsTrucTuRa De DaTOs";
    strupr (cadena);
    cout<<"La palabra correcta es: "<<cadena<<endl;
    char *cadenaPtr;
    cadenaPtr=&cadena[0];
    cout<<"El puntero es: "<<*cadenaPtr<<endl;
    return 0;
}



