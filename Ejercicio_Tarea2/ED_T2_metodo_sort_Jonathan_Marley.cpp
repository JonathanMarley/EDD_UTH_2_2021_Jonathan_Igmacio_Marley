#include <iostream>
#include <algorithm> //Nos ayuda para los arreglos y la ordenacion

using namespace std;

int main()
{

    int numero[8] = {80, 20, 98, 78, 36, 10, 87, 65};
    int suma=0;

    cout<<"==================================================="<<endl;
    cout<<"  | PROGRAMA DE ORDENAMIENTO CON LA FUNCION SORT |  "<<endl;
    cout<<"==================================================="<<endl;

    cout<<"***************************************************"<<endl;
    cout<<"     | LOS ELEMENTOS EN DESORDEN SON   |           "<<endl;
    cout<<"***************************************************"<<endl;
    cout << "" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout <<"->"<< " | " << numero[i] << " | ";
    }
    cout << "" << endl;
    cout << "" << endl;

    sort(numero, numero + 8);
    cout<<"***************************************************"<<endl;
    cout<<"     | LOS ELEMENTOS ORDENADOS DEL ARREGLO SON: |  "<<endl;
    cout<<"***************************************************"<<endl;
    //cout << "" << endl;
    for (int f = 0; f < 8; f++)
    {
        cout <<"->"<< " | " << numero[f] << " | ";
    }
    cout <<""<<endl;
    cout <<""<<endl;
    
    cout<<"*****************************************************************"<<endl;
    cout<<"     | RESULTADOS DE LA SUMA DE LOS ELEMENTOS ORDENADOS SON |    "<<endl;
    cout<<"*****************************************************************"<<endl;
    for (int v = 0; v < 8; v++)
    {
        suma+=numero[v];
    }
    cout<<"=========================================================="<<endl;
    cout<<" --La suma de los elementos de ordenados es: "<<suma<<endl;
    cout<<"=========================================================="<<endl;

    system("pause");
    return 0;
}
