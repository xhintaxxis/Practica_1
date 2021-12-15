#include <iostream>

using namespace std;

int main()
{
    unsigned int peso;
    cout<<"ingrese el dinero: ";
    cin>>peso;
    int CinM=peso/50000;
    cout<<"50000: "<<CinM<<endl;
    peso=peso%50000;
    int Ven=peso/20000;
    cout<<"20000: "<<Ven<<endl;
    peso=peso%20000;
    int Diez=peso/10000;
    cout<<"10000: "<<Diez<<endl;
    peso=peso%10000;
    int Cinco=peso/5000;
    cout<<"5000: "<<Cinco<<endl;
    peso=peso%5000;
    int DosM=peso/2000;
    cout<<"2000: "<<DosM<<endl;
    peso=peso%2000;
    int Mil=peso/1000;
    cout<<"1000: "<<Mil<<endl;
    peso=peso%1000;
    int Qui=peso/500;
    cout<<"500: "<<Qui<<endl;
    peso=peso%500;
    int Dos=peso/200;
    cout<<"200: "<<Dos<<endl;
    peso=peso%200;
    int Cien=peso/100;
    cout<<"100: "<<Cien<<endl;
    peso=peso%100;
    int Cin=peso/50;
    cout<<"50: "<<Cin<<endl;
    peso=peso%50;
    cout<<"Resto: "<<peso<<endl;
    return 0;
}
