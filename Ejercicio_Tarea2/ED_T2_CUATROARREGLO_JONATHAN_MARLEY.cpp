#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
//const int tamanio=20, maximo = 874;
//const int arreglo=20, max = 6200;

int main()
{

    int A[20];
    int B[20];
    int C[20];
    int D[20];
    srand(time(NULL));

    cout << "===================================================" << endl;
    cout << "        | PROGRAMA DE SUMA Y RESTA ALEATORIA   |   " << endl;
    cout << "===================================================" << endl;

    cout << "" << endl;

    cout << "===================================================" << endl;
    cout << "          | LOS NUMEROS ALEATORIO A  |             " << endl;
    cout << "===================================================" << endl;
    //LOS NUMEROS ALEATORIO DE A
    for (int i = 0; i < 20; i++)
    {
        A[i] = 1 + rand() % (1 - 35689);
        // cout<<"==================================================="<<endl;
        cout << " --- El numero aletorio del A es: --- [" << i << "]" << endl;
        cout << "->"
             << " | " << A[i] << endl;
    }
    cout << "" << endl;

    cout << "===================================================" << endl;
    cout << "          | LOS NUMEROS ALEATORIO B  |             " << endl;
    cout << "===================================================" << endl;
    //LOS NUMEROS ALEATORIO DE B
    for (int c = 0; c < 20; c++)
    {
        B[c] = 1 + rand() % (1 - 45875);
        // cout<<"==================================================="<<endl;
        cout << " --- El numero aleatorio del B es: --- [" << c << "]" << endl;
        cout << "->"
             << " | " << B[c] << endl;
    }

    cout << "=====================================================" << endl;
    cout << "   | LA SUMA DE LOS NUMEROS ALEATORIA DEL A Y B  |   " << endl;
    cout << "=====================================================" << endl;

    for (int v = 0; v < 20; v++)
    {
        C[v] = A[v] + B[v];

        cout << " *****La suma de los arrelos de A y B es: ***** [" << v << "]" << endl;
        cout << " -> "<<" | " << C[v] << endl;
        //cout << "*************************************************************" << endl;
    }
    cout<<""<<endl;

    cout << "=====================================================" << endl;
    cout << "   | LA RESTA DE LOS NUMEROS ALEATORIA DEL A Y B  |   " << endl;
    cout << "=====================================================" << endl;

    for (int n = 0; n < 20; n++)
    {
        D[n] = A[n] - B[n];

        cout << " *****La Resta de los arrelos de A y B es: ***** [" << n << "]" << endl;
        cout << " -> " <<" | " << D[n] << endl;
        //cout << "*************************************************************" << endl;
    }

    system("pause");
    return 0;
}
