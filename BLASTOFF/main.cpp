#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int problema1();
int problema2();

int main() {
	//Acentua��o
	setlocale(LC_ALL,"");
	problema1();
	problema2();
	
	
	return 0;
}

int problema1(){
	//1- Dada as idades I, J, K, X, Y. Fa�a um algoritmo para calcular a m�dia das idades.
	int i,j,k,x,y;
	i = 30; j = 27; k = 70; x = 17; y = 23;
	cout << i << ", " << j << ", " << k << ", " << x << ", " << y << endl;

	float media = (i+j+k+x+y)/5;
	cout << "A m�dia das idades �: " << media << endl << endl;
	}
	
int problema2(){
	//2- Dada a dist�ncia A e o combust�vel gasto B, fa�a um algoritmo para calcular o consumo m�dio.
	float a;
	float comb;
	cout << "Digite a dist�ncia percorrida: ";
	cin >> a ;
	
	cout << "\nDigite o combust�vel gasto: ";
	cin >> comb;
	
	float b = a/comb;
	cout << "O consumo m�dio � de " << b << " km/l.";	
}


