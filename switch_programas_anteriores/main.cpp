#include <iostream>
using namespace std;
int main() {
    int opcion;
    cout<<"Ingrese una opcion entre1 y 7"<<endl;
    cout<<"1. Quieres saber si eres mayor de edad?"<<endl;
    cout<<"2. Que numero es mayor?"<<endl;
    cout<<"3. El numero par o impar?"<<endl;
    cout<<"4. Calcular el factorial de un  numero "<<endl;
    cout<<"5. Obtener numeros impares"<<endl;
    cout<<"6. Obtener numeros impares usando while"<<endl;
    cout<<"7. Obtener el dia de la semana"<<endl;
    cin>>opcion;
    switch (opcion){
        case 1:
            int edad;
            cout<<"ingresa tu edad"<<endl;
            cin>>edad;
            if (edad>=18){
                cout<<"Eres mayor de edad"<<endl;
            }else{
                cout<<"Eres menor de edad"<<endl;
            }
            break;
        case 2:
            int num1,num2;
            cout<<"Ingresa el primer numero"<<endl;
            cin>>num1;
            cout<<"Ingresa el segundo numero"<<endl;
            cin>>num2;
            if(num1>num2){
                cout<<num1<<" es mayor que "<<num2<<endl;
            }
            if(num1==num2){
                cout<<"Los numeros son iguales"<<endl;
            }
            else{
                cout<<num2<<" es mayor que "<<num1<<endl;
            }
            break;
        case 3:
                int num;
            int resultado;
            cout<<"Ingrese un numero"<<endl;
            cin>>num;
            resultado=num%2;

            if (resultado==0){
                cout<<"El numero es par"<<endl;
            }else{
                cout<<"El numero es impar"<<endl;
            }
                break;
        case 4:
            int contador,factorial,nume;
            cout<<"Ingrese un numero para obtener su factorial"<<endl;
            cin>>nume;
            contador=nume;
            factorial=nume;
            while(contador>1){
                contador=contador-1;
                factorial=factorial*contador;
            }
            cout << "El resultado de " << nume << "i es : " << factorial << endl;
            break;
        case 5:
            int m;
            int n;
            n=1;
            cout<<"Ingrese un numero mayor que 10 y menor que 30"<<endl;
            cin>>m;
            while(m<11 ||m>29){
                cout<<"Ingrese un numero valido mayor que 10 y menor que 30"<<endl;
                cin>>m;
            }
            if(m%2==1) {
                for (m > 10; n < m; n += 2) {
                    cout << n << endl;
                }
            }else {m+=1;
                for (m > 10; n < m; n += 2) {
                    cout << n << endl;
                }
            }
            break;
        case 6:
            int a,b,result;
            b=1;
            cout<<"Ingrese un numero mayor que 10 y menor que 30"<<endl;
            cin>>a;
            while (a<11 || a>29){
                cout<<"Ingrese un numero valido mayor que 10 y menor que 30"<<endl;
                cin>>a;
            }

            result=a%2;
            if (result==0) {
                a = a - 1;
            }
            cout<<b<<endl;
            while (b<a) {
                b=b+2;
                cout<<b<<endl;
            }
            break;
        case 7:
            int opc;

            cout<<"Ingrese un numero entre 1 y 5"<<endl;
            cin>>opc;

            switch(opc){
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
            break;
                default: cout<<"Ingrese una opcion valida"<<endl;
    }
    return 0;
}
