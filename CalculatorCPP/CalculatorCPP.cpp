#include <iostream>
#include <locale.h>
#include "Calculadora.h"
using namespace std;

int main()
{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';

	setlocale(LC_ALL, "pt_BR.UTF-8");
	cout << "App Calculadora no Console" << endl << endl;
	cout << "Por favor, digita a operação á realizar. Formato: a+b | a-b | a*b | a/b" << endl;

	Calculadora c;
	while (true) {
		cin >> x >> oper >> y;
		result = c.Calculate(x, oper, y);
		cout << "Resultado " << "de " << x << oper << y << " é: " << result << endl;
	}
	return 0;
}