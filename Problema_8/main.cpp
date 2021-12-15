#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout<<"Ingrese (a): ";
    cin>>a;
    cout<<"Ingrese (b): ";
    cin>>b;
    cout<<"Ingrese (c): ";
    cin>>c;
    int sumA=0;
    bool Pplus=false;
    for(int Ca=1;Ca<c;Ca++){
        if(Ca%a==0){
            if(Pplus==true){
                cout<<"+";
            }
            Pplus=true;
            sumA=(Ca)+sumA;
            cout<<Ca;
        }
    }
    cout<<"+";
    Pplus=false;
    int sumB=0;
    for(int Cb=1;Cb<c;Cb++){
        if(Cb%b==0){
            if (a*b!=Cb){
                if(Pplus==true){
                    cout<<"+";
                }
                Pplus=true;
                sumB=(Cb)+sumB;
                cout<<Cb;
            }
        }
    }
    cout<<"="<<(sumA+sumB)<<endl;
    return 0;
}
