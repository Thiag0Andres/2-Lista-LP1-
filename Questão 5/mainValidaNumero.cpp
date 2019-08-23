/*
    Thiago Andres Paiva Palacios
    Questao 5
*/

#include "TesteValidaNumero.h"
#include <string>

using namespace std;

int main(){
    int numero, n = 4; //Numero e n testes
	TesteValidaNumero * teste = new TesteValidaNumero();

    while(n--){
        cout << "Digite um numero: " << endl;
        cin >> numero;

        try{
            teste->validaNumero(numero);
        }
        catch(ValorAbaixoException e ){
            cerr << "Erro :" << e.what() << endl;
        }
        catch(ValorAcimaException e){
            cerr << "Erro  : " << e.what() << endl;
        }
        catch(ValorMuitoAcima e){
            cerr << "Erro : " << e.what() << endl;
        }
        catch(...){
            cerr << "Erro" << endl;
        }
    }

	return 0;
}
