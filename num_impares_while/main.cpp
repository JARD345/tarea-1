#include <iostream>
using namespace std;
int main() {
    int num1,num2=1,resultado;
    cout<<"Ingrese un numero mayor que 10 y menor que 30"<<endl;
    cin>>num1;
    while (num1<11 || num1>29){
        cout<<"Ingrese un numero valido mayor que 10 y menor que 30"<<endl;
        cin>>num1;
    }

    resultado=num1%2;
    if (resultado==0) {
        num1 = num1 - 1;
    }
    cout<<num2<<endl;
        while (num2<num1) {
            num2=num2+2;
            cout<<num2<<endl;
        }
    return 0;
}
