#include <iostream>

using namespace std;

int main(void){
    int nota, idade;
    cout << "qual a sua idade? ";
    cin >> idade;

    cout << "qual a nota da sua prova? ";
    cin >> nota;


    if (!(idade <= 18)) {
        cout << "você é da modalidade senior!\n";
    
        return 0;
    }

    if (nota > 100 || nota < 0 || idade <= 0){

        cout << "a nota ou idade estar em formato invalido!\n";

        return 0;
    }

    if ( idade <= 18 && nota >= 80){

        cout << "voce ganhou medalha parabens\n!!";
        
        return 0;
    }

    if ( idade <= 18 && nota <= 80){

        cout << "você não ganhou medalha tente proximo ano.\n";

        return 0;
    }

    
        return 0;
}
