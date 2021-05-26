//En un autobus con capacidad para 50 asientos la venta del boleto tiene la siguiente condicion
//1- se podra vender un boleto siempre y cuando el asiento este vacio imprimir boletos vendidos

#include <iostream>

using namespace std;

int main(){
    int AutoBus[50], NumAsiento[10];


    for (int x = 0; x < 50; x++){

        AutoBus[x]=0;

        cout<<"Ingrese un numero de asiento:: "<<endl;
        cin >> NumAsiento[10];
         
        for ( int c = 0; c < NumAsiento[10]; c++){
            
         //cout<<"Ingrese un numero de asiento:: "<<endl;
         //cin >> NumAsiento;
         
         if (NumAsiento[10] == 0 ){
            
         }else {
             cout<<"---El Asiento esta ocupado por favor ingrese otro numero de asiento--- "<<endl;
         }
         cout<<"\""<<AutoBus[x]<<"\" -- " << x <<endl;

         }
           
            
            cout<<"El numero de asiento es: "<< NumAsiento <<endl;
        }
    
    system("pause");

    
    return 0;
}
