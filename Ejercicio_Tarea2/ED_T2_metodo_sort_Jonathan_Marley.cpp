#include <iostream>
#include <algorithm> //Nos ayuda para los arreglos y la ordenacion

using namespace std;

int main()
{

    int numero[8] = {80, 20, 98, 78, 36, 10, 87, 65};
    int suma=0;

    cout << " ======== los elementos original son ======== "<<endl;
    cout << "" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout <<"->"<< " | " << numero[i] << " | ";
    }
    cout << "" << endl;
    cout << "" << endl;

    sort(numero, numero + 8);

    cout << " ======== Los elementos ordenados del arreglados son ======== " << endl;
    cout << "" << endl;
    for (int f = 0; f < 8; f++)
    {
        cout <<"->"<< " | " << numero[f] << " | ";
    }
    cout <<""<<endl;
    cout <<""<<endl;
    
    //La suma de los elementos ordenados son;
    for (int v = 0; v < 8; v++)
    {
        suma+=numero[v];
    }
    cout<<" --La suma de los elementos de ordenados es: "<<suma<<endl;
    

    system("pause");
    return 0;
}
