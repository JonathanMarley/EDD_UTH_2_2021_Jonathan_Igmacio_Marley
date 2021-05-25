//En un autobus con capacidad para 50 asientos la venta del boleto tiene la siguiente condicion
//1- se podra vender un boleto siempre y cuando el asiento este vacio, imprimir boletos vendidos
#include <iostream>

using namespace std;

int main(){
    int AutoBus[50], NumAsiento[10];
    for (int x = 0; x<50; x++){
         cout<<"Ingrese un numero para comprar su boleto"<<endl;
         cin>>NumAsiento[10];
         AutoBus[x]=0;
         for (int c = 0; c < 50; c++){
             
             if (c == 0){
                AutoBus[x]=NumAsiento[10];
                cout<<"Usted compro el numero:"<< NumAsiento <<endl;
             }else{
                 cout<<"El numero ya fue comprado:"<<endl;
             }
             
         }
         
    }
    

    
    return 0;
}
