#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int problema1();
int problema2();
int problema3();
int problema4();

int main() {
	//Acentua��o
	setlocale(LC_ALL,"");
	problema1();
	problema2();
	problema3();
	problema4();
	
	
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
	cout << "O consumo m�dio � de " << b << " km/l.\n";	
}

int problema3(){
	//3 - Dados tr�s n�meros (a, b, c), fa�a um algoritmo para mostrar o menor n�mero.
	int a,b,c;
	cout << "\nDigite tr�s n�meros: \n";
	cin >> a >> b >> c;
	
	if (a < b){
		if (a < c){
		cout << a << " � o menor numero!\n";
		}
		else
		cout << c << " � o menor numero!\n";
	}
	else
		if (b < c){
			cout << b << " � o menor numero!\n";
			}
			else
			cout << c << " � o menor numero!\n";
		}
		
int problema4(){
	//4 - Fa�a um algoritmo que converta a temperatura de C para F.
	float celsius, fahr;
	cout << "\n Digite a temperatura a ser convertida: ";
	cin >> celsius;
	fahr = (celsius * 9/5) + 32 ;
	
	cout << "\nA temperatura � " <<fahr << " Fahrenheit!";
}




