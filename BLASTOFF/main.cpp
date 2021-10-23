#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int problema1();
int problema2();
int problema3();
int problema4();

int main() {
	//Acentuação
	setlocale(LC_ALL,"");
	problema1();
	problema2();
	problema3();
	problema4();
	
	
	return 0;
}

int problema1(){
	//1- Dada as idades I, J, K, X, Y. Faça um algoritmo para calcular a média das idades.
	int i,j,k,x,y;
	i = 30; j = 27; k = 70; x = 17; y = 23;
	cout << i << ", " << j << ", " << k << ", " << x << ", " << y << endl;

	float media = (i+j+k+x+y)/5;
	cout << "A média das idades é: " << media << endl << endl;
	}
	
int problema2(){
	//2- Dada a distância A e o combustível gasto B, faça um algoritmo para calcular o consumo médio.
	float a;
	float comb;
	cout << "Digite a distância percorrida: ";
	cin >> a ;
	
	cout << "\nDigite o combustível gasto: ";
	cin >> comb;
	
	float b = a/comb;
	cout << "O consumo médio é de " << b << " km/l.\n";	
}

int problema3(){
	//3 - Dados três números (a, b, c), faça um algoritmo para mostrar o menor número.
	int a,b,c;
	cout << "\nDigite três números: \n";
	cin >> a >> b >> c;
	
	if (a < b){
		if (a < c){
		cout << a << " é o menor numero!\n";
		}
		else
		cout << c << " é o menor numero!\n";
	}
	else
		if (b < c){
			cout << b << " é o menor numero!\n";
			}
			else
			cout << c << " é o menor numero!\n";
		}
		
int problema4(){
	//4 - Faça um algoritmo que converta a temperatura de C para F.
	float celsius, fahr;
	cout << "\n Digite a temperatura a ser convertida: ";
	cin >> celsius;
	fahr = (celsius * 9/5) + 32 ;
	
	cout << "\nA temperatura é " <<fahr << " Fahrenheit!";
}




