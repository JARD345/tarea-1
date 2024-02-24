#include <iostream>
using namespace std;
int main() {
    int contador,factorial,num;
    cout<<"Ingrese un numero para obtener su factorial"<<endl;
    cin>>num;
    contador=num;
    factorial=num;
    while(contador>1){
        contador=contador-1;
        factorial=factorial*contador;
    }
    cout << "El resultado de " << num << "i es : " << factorial << endl;
    return 0;
}
