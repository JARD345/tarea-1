#include <iostream>
using namespace std;
int main() {
    int opcion;

        cout<<"Ingrese un numero entre 1 y 5"<<endl;
        cin>>opcion;

    switch(opcion){
        case 1:cout<<"Lunes"<<endl;
            break;
        case 2:cout<<"Martes"<<endl;
            break;
        case 3:cout<<"Miercoles"<<endl;
            break;
        case 4:cout<<"Jueves"<<endl;
            break;
        case 5:cout<<"Viernes"<<endl;
            break;
        default: cout<<"Ingrese una opcion valida"<<endl;
    }
    return 0;
}
