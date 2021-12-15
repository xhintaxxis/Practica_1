#include <iostream>
#include <string.h>

using namespace std;
int verificadorTiempo1();
int verificadorTiempo2();

int main(){
    int T1=verificadorTiempo1();
    int T2=verificadorTiempo2();
    int Th1=T1/100;
    int Th2=T2/100;
    int Tm1=T1%100;
    int Tm2=T2%100;
    int TTh=(Th1+Th2)%24;
    int TTm=(Tm1+Tm2)%60;
    int Thm=(Tm1+Tm2)/60;
    int TT=((TTh+Thm)*100)+TTm;
    cout<<"La hora es: "<<TT<<endl;
}

int verificadorTiempo1(){
    do{
        int T;
        cout<<"Ingrese el primer tiempo: ";
        cin>>T;
        int Th=T/100;
        int Tm=T%100;
        if(Th>=0&Th<=23){
            if(Tm>=0&Tm<=59){
                return T;
            }
            else{
                cout<<"Numero no valido"<<endl;
            }
        }
        else{
            cout<<"Numero no valido"<<endl;
        }
    }while(1);
}

int verificadorTiempo2(){
    do{
        int T;
        cout<<"Ingrese el segundo tiempo: ";
        cin>>T;
        int Th=T/100;
        int Tm=T%100;
        if(Th>=0&Th<=23){
            if(Tm>=0&Tm<=59){
                return T;
            }
            else{
                cout<<"Numero no valido"<<endl;
            }
        }
        else{
            cout<<"Numero no valido"<<endl;
        }
    }while(1);
}
