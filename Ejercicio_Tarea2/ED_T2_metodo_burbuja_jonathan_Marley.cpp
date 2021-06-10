#include <iostream>

using namespace std;

int main()
{
    const int tamanio=8; 
    int n,h;
    int arreglo[tamanio],numero, auxi;
    int suma=0;
    for (int i = 0; i < tamanio; i++)
    {
        arreglo[i]=0;
    }
    
    
    for (int d = 0; d < tamanio; d++)
    {
        cout <<" **Ingrese los numeros** ["<<d<<"]"<<endl;
        cout<<" ";cin >> arreglo[d];
        
    }
    cout<<""<<endl;
    for (int f = 0; f < 8; f++)
        {
            for (int c = 0; c < 7; c++)
            {
                
            if (arreglo[c] > arreglo[c+1])
            {
                auxi = arreglo[c];
                arreglo[c] = arreglo[c+1];
                arreglo[c+1] = auxi;
            }
            }

        }


        cout<<" ***Los elementos ingresado fueron*** "<<endl;
        for (int z = 0; z < 8; z++)
        {
            cout<<" | "<<arreglo[z]<<" | "<<endl;
        }
        cout<<""<<endl;

        cout<<" ***Los elementos ingresado por teclado ordenados*** "<<endl;
        for (int v = 0; v < 8; v++)
        {
            
            cout<<" | "<<v<<" | "<<" -> " <<arreglo[v]<<endl;
            //suma+=arreglo[v]; 
           
        }
        

        cout<<" ****La suma de los arreglo ordenados**** "<<endl;
        for (int m = 0; m < 8; m++)
        {
          suma+=arreglo[m]; 
        }
        cout<<" ---La suma es: "<<suma<<endl;
        
        
        
        system("pause");

    //cout << " ***Los numero ingresados fuero: " << numero << endl;

    return 0;
}
