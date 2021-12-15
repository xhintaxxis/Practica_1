#include <iostream>

using namespace std;

int main()
{

    int a;
    cout<<"Ingrese un numero para hacerle la proximacion a euler: ";
    cin>>a;
    float Esum=0;
    for(int b=0;b<a;b++){
        float factP=1;
        if(b==0){
            factP=1;
        }
        else{
            for(int c=1;c<=b;c++){
                factP=factP*c;
            }
        }
        Esum=(1/factP)+Esum;
    }
    cout<<Esum<<endl;
    return 0;
}
