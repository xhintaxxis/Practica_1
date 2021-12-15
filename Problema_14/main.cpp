#include <iostream>

using namespace std;
int VeriPali(int a);


int main()
{
    int num1;
    int num2;
    int pali;
    bool verifi;
    int salida=0;
    for(int F=100;F<=999;F++){
        for(int S=100;S<=999;S++) {
            pali=F*S;
            verifi=VeriPali(pali);
            if (verifi==true){
                if (salida<pali){
                    num1=S;
                    num2=F;
                    salida=pali;
                }
            }
        }
    }
    cout<<num1<<"*"<<num2<<"="<<salida<<endl;
    return 0;
}

int VeriPali(int a){
    int inv=0;
    int ver=a;
    int res;
    while(ver>0){
        res=ver%10;
        inv=res+(10*inv);
        ver=ver/10;
    }
    if(a==inv){
        return true;
    }
    else{
       return false;
    }
}

