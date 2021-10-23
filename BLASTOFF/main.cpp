#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

int problema1();
int problema2();
int problema3();
int problema4();
int problema5();
int problema7();
int problema8();
int problema9();
int problema10();
int problema11();
int problema13();
int problema14();

int main() {
	//Acentuação
	setlocale(LC_ALL,"");
	problema1();
	problema2();
	problema3();
	problema4();
	problema5();
	problema7();	
	problema8();
	problema9();
	problema10();
	problema11();
	problema13();
	problema14();
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
	
	cout << "\nA temperatura é " <<fahr << " Fahrenheit!\n\n";
}

int problema5(){
	int a, b;
	cout << "Digite dois numeros: " ;
	cin >> a;
	cin >> b;
	
	if (a % b == 0){
		cout << "Os numeros são multiplos\n\n";
	}
	else
		cout << "Os numeros não são multiplos\n\n";
}

/*int problema6(){
	//6 - Uma partida de futebol iniciou na hora A e terminou na hora B. Faça um algoritmo que calcule o tempo que durou a partida.
	

}
*/

int problema7(){
	//7 - Dada uma lista de números A[1,2,3,…], faça um algoritmo que retorne uma lista somente com os números pares.

	for (int l = 1; l<=10;l++){
		int p = l;
		
		if (p % 2 == 0)
		cout << p << " ";
	}
}

int problema8(){
	//8 - Faça um algoritmo que receba um número e retorne se o número é primo ou não.
	
	int l, num, div=0;
	cout << "\n\nDigite um numero: ";
	cin >> num;
    for(l=2 ; l<=num/2 ; l++)
        if(num%l==0)
            div++;

    if(div==0)
        cout << "É primo" <<endl;
    else
        cout << "Não é primo" <<endl;
}

int problema9(){
	//9 - Faça um algoritmo que receba um número e retorne a tabuada desse número.
		
	int multi;
	cout << "\n\n Digite um numero para a tabuada: ";
	cin >> multi;
	cout << endl << endl;
	
	for (int l = 1; l <= 10; l++){
		int result = multi*l;
		cout << endl;
		cout << multi << "x" << l << " = " << result;
	}
}

int problema10(){
	 //10 - Faça um algoritmo que receba um número e retorne o Fatorial desse 
    int n, aux, prod=1;

    cout << "\n\nFatorial de: ";
    cin >> n;

    for(aux=1 ; aux<=n ; aux++)
        prod *= aux;

    cout << "Fatorial: " << prod << endl;
}

int problema11(){
	 //Dada duas lista de números A[1,2,3,4] e B[1,2,5,8], faça um algoritmo que retorne a intersecção das listas
	 
	 int a[] = { 1, 2, 3, 4}, b[] = { 1, 2, 5, 8};
  int i,j;

  cout << "\nConjunto A { 1, 2, 3, 4 } ";
  cout <<"\nconjunto B { 1, 2, 5, 8 } ";

  for (i = 0; i < 4; i++){
  	  for (j = 0; j < 4; j++){
			  if(a[i] == b[j]){
				 cout <<"\nA interseccao contém: " << a[i];
			  }
       }
  }
	
}

int problema13(){
	// 13 - Faça um algoritmo que receba uma matriz[i,z] como parâmetro e imprima todos os valores dessa matriz

cout << endl;
cout << endl;
	int matriz [3][3];
	
	matriz[0][0] = 5;
	matriz[0][1] = 22;
	matriz[0][2] = 11;
			
	matriz[1][0] = 12;
	matriz[1][1] = 5;
	matriz[1][2] = 6;
	
	matriz[2][0] = 33;
	matriz[2][1] = 7;
	matriz[2][2] = 8;
	
	for(int a=0; a < 3; a++){
		for (int b=0; b < 3; b++){
			cout << matriz[a][b] << " ";
		}
		cout << endl;
	}
}

int problema14(){
	//14 - Faça um algoritmo que recebe uma palavra e retorne se a palavra é palíndromo. (Palavra que se pode ler, indiferentemente, da esquerda para direita ou vice-versa. Ex: osso, Ana e etc)
	
	string s1;
    
    cin >> s1;

    if (s1 == string(s1.rbegin(), s1.rend())) {
        cout << "A palavra é palindromo" << endl;
    } else {
        cout << "A palavra não é palindromo" << endl;
    }
}
	
	
	
	
	
	
	
	

