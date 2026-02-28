#include <iostream>

using namespace std;

int main(void){
    int a, b;

    cout >> " me diga dois números: ";
    cin >> a >> b;

    if (a > b){
        cout << a << " e maior que " << b << "\n";
    } else if (a < b){
        cout << a << " não é maior que " << b << "\n";
    } else 
        cout << a << " é igual a " << b << "\n";
    

    return 0;
}