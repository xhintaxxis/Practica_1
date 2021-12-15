#include <iostream>

using namespace std;

int Collatz(int x);
int seriePrint(int y);

int main()
{
    int N;
    int elm;
    int salida=0;
    int semilla;
    cout<<"Ingrese un numero: ";
    cin>>N;
    for(int i=1;i<N;i++){
        elm=Collatz(i);
        if(elm>salida){
            salida=elm;
            semilla=i;
        }
    }
    cout<<"La serie mas larga es con la semilla: "<<semilla<<","<<" teniendo "<<salida<<"  terminos."<<endl;
    seriePrint(semilla);
    return 0;
}

int Collatz(int x){
    int cont=1;
    int aux=x;
    while(aux!=1){
        if(aux%2==0){
            aux=aux/2;
            cont=cont+1;
        }
        else{
            aux=(3*aux)+1;
            cont=cont+1;
        }

    }
    return cont;
}
int seriePrint(int y){
    int aux=y;
    cout<<y<<": "<<aux<<", ";
    while(aux!=1){
        if(aux%2==0){
            aux=aux/2;
            cout<<aux;
        }
        else{
            aux=(3*aux)+1;
            cout<<aux;
        }
        if(aux!=1){
            cout<<", ";
        }
    }
    cout<<endl;
}
