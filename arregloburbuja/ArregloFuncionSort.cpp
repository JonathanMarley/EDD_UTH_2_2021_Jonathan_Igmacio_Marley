#include <iostream>
#include <vector>
#include <algorithm> // Nos ayuda para arreglos o vectores

using namespace std;

int main()
{
    int arreglo[5]={4,8,6,2,7};

    sort(arreglo, arreglo+5); // FUNCION, Necesita 2 parametros
   
   cout<<"los elementos ordenados: "<<endl;
   for (int i = 0; i < 5; i++)
   {
       cout<<arreglo[i]<<endl;
   }
   
    system("pause");
    return 0;
}
