#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int problema1();

int main() {
	//Acentuação
	setlocale(LC_ALL,"");
	problema1();
	
	
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
	
}
