/*
inicializar una matriz 3x3 tipo enteros
inveritr la matriz
imprimir la matriz original y la matriz invertida
*/

#include <iostream>

using namespace std;

int main()
{
    
    int matriz[3][3];
    for (int i = 0; i < 3; i++)
    {
       for (int d = 0; d < 3; d++)
       {
           cout<<"Digite un numero: ["<<i<<"]["<<d<<"]: "<<endl;
           cin>>matriz[i][d];
       }
       cout<<""<<endl;
       
    }
    cout<<""<<endl;
    cout<<"===Matriz original=== "<<endl;
    cout<<""<<endl;
    for (int c = 0; c < 3; c++)
    {
        for (int f = 0; f < 3; f++)
        {
            cout<<" | "<<matriz[c][f]<<" | ";
        }
        cout<<" "<<endl;
        
    }
    cout<<""<<endl;
    cout<<"***** Matriz Inverza**** "<<endl;
    cout<<""<<endl;
    for (int r = 0; r < 3; r++)
    {
        for (int e = 0; e < 3; e++)
        {
            cout<<" | "<<matriz[e][r]<<" | ";
        }
        cout<<" "<<endl;
    }
    
    system("pause");
    return 0;
}
