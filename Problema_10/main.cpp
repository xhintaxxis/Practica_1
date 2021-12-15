#include <iostream>

using namespace std;
int VeriPrimo(int a);

int main()
{
    int N;
    cout<<"Ingrese un numero: ";
    cin>>N;
    int cont=0;
    int salida;
    int num=2;
    do{
        bool veri=VeriPrimo(num);
        if(veri==true){
            salida=num;
            cont=cont+1;
        }
        num=num+1;
    }while(cont!=N);
    cout<<"El primo numero "<<N<<" es: "<<salida<<endl;
    return 0;
}
int VeriPrimo(int a){
   for(int ver=2;ver<a;ver++){
       if(a%ver==0){
           return false;
       }
   }
   return true;
}
