#include <iostream>

using namespace std;

int main()
{
    //const int tamanio=10;
    int numero[] {2,9,7,5,1,3,6,4,8,10};
    int auxi, i,j;
    

    for (int i = 0; i <10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (numero[j] > numero[j+1])
            {
                auxi = numero[j];
                numero[j] = numero[j+1];
                numero[j+1] = auxi;
            }
            
        }
        
    }

    cout<<" ***Ordenamientos: "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<numero[i]<<" ";
    }
    
    
    return 0;
}
