#include <iostream>

using namespace std;

int main()
{
    //ordenar un arreglo de datos utilizando la funcion sor
    //const int tamanio=10;
    int bubble[7] = {8,9,4,7,2,6,1};
    int auxi;
    

    for (int i = 0; i <7; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (bubble[j] > bubble[j+1])
            {
                auxi = bubble[j];
                bubble[j] = bubble[j+1];
                bubble[j+1] = auxi;
            }
            
        }
        
    }

    cout<<" ***Los elementos ordenados: "<<endl;
    for (int i = 0; i < 7; i++)
    {
        
        cout<<bubble[i]<<" "<<endl;
    }
    
    system("pause");
    return 0;
}
