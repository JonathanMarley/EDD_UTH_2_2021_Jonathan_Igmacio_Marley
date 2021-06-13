#include <iostream>

using namespace std;

// int arreglo[8];
int main()
{

    int numero[8], auxi;
    int suma = 0;
    
    cout<<"==================================================="<<endl;
    cout<<"  | PROGRAMA DE ORDENAMIENTO CON METODO BURBUJA |  "<<endl;
    cout<<"==================================================="<<endl;
    for (int d = 0; d < 8; d++)
    {
        cout << " **Ingrese los numeros** [" << d << "]" << endl;
        cout << " ";
        cin >> numero[d];
    }
    cout<<"************************************************************"<<endl;
    cout<<"   | LOS NUMEROS INGRESADO POR TECLADO EN DESORDEN |        "<<endl;
    cout<<"************************************************************"<<endl;
    //cout << " *** Los elementos ingresado por teclado fueron en desoren *** " << endl;cout <<""<<endl;
    for (int z = 0; z < 8; z++)
    {
        cout << " | " << z << " | " << " -> " << numero[z] << " | "<<endl;
    }
    cout << "" << endl;
    
    //metodo burbuja para ordenar los arrglos
    for (int f = 0; f < 8; f++)
    {
        for (int c = 0; c < 7; c++)
        {

            if (numero[c] > numero[c + 1])
            {
                auxi = numero[c];
                numero[c] = numero[c + 1];
                numero[c + 1] = auxi;
            }
        }
    }
    cout<<"*************************************************"<<endl;
    cout<<"     | RESULTADOS DE LOS ELEMENTOS ORDENADOS |    "<<endl;
    cout<<"**************************************************"<<endl;
    for (int v = 0; v < 8; v++)
    {

        cout << " | " << v << " | "<< " -> " << numero[v] <<" | "<<endl;
        //suma+=arreglo[v];
    }
    cout <<""<<endl;

    cout<<"**************************************************************"<<endl;
    cout<<"     | RESULTADOS DE LA SUMA DE LOS ELEMENTOS ORDENADOS  |    "<<endl;
    cout<<"**************************************************************"<<endl; 
    //La suma de los arreglos ordenados 
    for (int m = 0; m < 8; m++)
    {
        suma += numero[m];
    }
    cout<<"================================================================================="<<endl;
    cout << " ---La suma de los elementos ingresado en forma de ordenada es: " << suma          <<endl;
    cout<<"================================================================================="<<endl;

    system("pause");

    //cout << " ***Los numero ingresados fuero: " << numero << endl;

    return 0;
}
