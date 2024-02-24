#include <iostream>
using namespace std;
int main() {
    int num,num2=1;
    cout<<"Ingrese un numero mayor que 10 y menor que 30"<<endl;
    cin>>num;
    while(num<11 ||num>29){
        cout<<"Ingrese un numero valido mayor que 10 y menor que 30"<<endl;
        cin>>num;
    }
    if(num%2==1) {
        for (num > 10; num2 < num; num2 += 2) {
            cout << num2 << endl;
        }
    }else {num+=1;
        for (num > 10; num2 < num; num2 += 2) {
            cout << num2 << endl;
        }
    }
    return 0;
}
