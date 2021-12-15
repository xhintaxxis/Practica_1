#include <iostream>

using namespace std;

int main()
{
    int N;
    int primo= -1;
    cout<<"Ingrese un numero: ";
    cin>>N;
    for(int div=1; div<=N; div++){
        //bool P=false;
        if (N%div==0){
            bool P=false;
            for(int n=2;n<div;n++){
                if(div%n==0){
                    P=true;
                    break;
                }
            }
            if(P==false){
                primo=div;
            }
        }

    }
    cout<<"El mayor factor primo de "<<N<<" es: "<<primo<<endl;
    return 0;
}
