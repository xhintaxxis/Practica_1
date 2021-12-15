#include <iostream>

using namespace std;
int Divisores(int a);
int main()
{
    int N;
    int tri;
    cout<<"ingrese un numero: ";
    cin>>N;
    int posi=1;
    int div;
    while(true){
        tri=(posi*(posi+1))/2;
        div=Divisores(tri);
        if(div>N){
            break;
        }
        posi=posi+1;
    }
    cout<<"El numero es: "<<tri<<" que tiene "<<div<<" divisores. "<<endl;
    return 0;
}
int Divisores(int a){
    int cont=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            cont=cont+1;
        }
    }
    return cont;
}
