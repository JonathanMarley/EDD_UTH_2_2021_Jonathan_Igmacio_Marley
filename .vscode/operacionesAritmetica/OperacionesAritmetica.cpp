//Leer un arreglo de datos tamanio 10, tipo entero
//imprimir el arreglo de datos
//sumar los elementos del arreglo de datos e imprimir la suma

#include <iostream>
using namespace std;

int main(){

    cout<<"Ingrese 10 elementos enteros"<<endl;
    
    int Aritmetica[10],suma=0, multiplicacion, resultado;//declaracion de un arreglo de datos

    for (int x=0; x<10; x++){
    
        cin>>Aritmetica[x]; 
        multiplicacion=multiplicacion * Aritmetica[x];
        suma=suma + Aritmetica[x]; 
        

    } 
    cout<<"La suma de los elementos del arreglos de datos es: " << suma <<endl;
    cout<<"La multiplicacion de los elementos del arreglos de datos es: " << resultado <<endl;
  
    cout<<"Impresion de los elementos del arreglo de datos"<<endl;

     for (int y = 0; y< 10; y++){
        
         cout<<"\""<<Aritmetica[y]<<"\" -- " << y <<endl;
    }
     system("pause");
   
    
    return 0;
}
