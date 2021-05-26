//En un autobus con capacidad para 50 asientos la venta del boleto tiene la siguiente condicion
//1- se podra vender un boleto siempre y cuando el asiento este vacio imprimir boletos vendidos

#include <iostream>
#include <string.h>
using namespace std;

int main(){

    const int tamanio=5;
    int AutoBus[tamanio], NumAsiento, contador;
    char resp='s';



    for (int x = 0; x < tamanio; x++){
        AutoBus[x]=0;
    }
    while (resp=='s' && contador<tamanio){
        cout<<"Digite un numero de asiento: "<<endl;
        cin>>NumAsiento;
        if (AutoBus[NumAsiento-1]==0){
            AutoBus[NumAsiento-1]=1;
            contador++;
        }else
        cout<<"El asiento ya fue reservado"<<endl;
        
        cout<<"Quiere continuar vendiendo?"<<endl;
        cin>>resp;
        
        cout<<"Informes de boletos vendidos y no comprados"<<endl;

        for (size_t y = 0; y < tamanio; y++){
            if (AutoBus[y]==1){
                cout<<"Asiento #"<< y+1 << "-> vendido" <<endl;
            }else
            cout<<"Asiento #"<< y+1 << "-> DESOCUPADO" <<endl;
            
        }
        
        
    }
    

    
    return 0;
}
