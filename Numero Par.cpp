/* TP2 Programa Numero par, indica si un número ingresado es par o impar.
* Juan Cruz Poveda
* 16/4/15
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int a;
	string res;
	cout << "Ingrese un numero para saber si es par: ";
	cin >> a;
	if(a%2 == 0){
		res = "El numero es par.";
	}
	else{
		res = "El numero es impar.";
	}
	cout << res;
}
