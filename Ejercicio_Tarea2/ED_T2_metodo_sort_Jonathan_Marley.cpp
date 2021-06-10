#include <iostream>
#include <algorithm> //Nos ayuda para los arreglos y la ordenacion

using namespace std;

int main()
{
    
    int arreglo[8]={80,20,98,78,36,10,87,65};

    sort(arreglo, arreglo+8);

    cout<<" ** Los elementos ordenados del arreglados son: "<<endl;
    for (int f = 0; f < 8; f++)
    {
        cout<<" | "<<arreglo[f]<<" | "<<endl;
    }
    
    cout<<
    system("pause");
    return 0;
}

