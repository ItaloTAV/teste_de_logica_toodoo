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
	//Acentua��o
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
	
	cout << "\nA temperatura � " <<fahr << " Fahrenheit!\n\n";
}

int problema5(){
	int a, b;
	cout << "Digite dois numeros: " ;
	cin >> a;
	cin >> b;
	
	if (a % b == 0){
		cout << "Os numeros s�o multiplos\n\n";
	}
	else
		cout << "Os numeros n�o s�o multiplos\n\n";
}

/*int problema6(){
	//6 - Uma partida de futebol iniciou na hora A e terminou na hora B. Fa�a um algoritmo que calcule o tempo que durou a partida.
	

}
*/

int problema7(){
	//7 - Dada uma lista de n�meros A[1,2,3,�], fa�a um algoritmo que retorne uma lista somente com os n�meros pares.

	for (int l = 1; l<=10;l++){
		int p = l;
		
		if (p % 2 == 0)
		cout << p << " ";
	}
}

int problema8(){
	//8 - Fa�a um algoritmo que receba um n�mero e retorne se o n�mero � primo ou n�o.
	
	int l, num, div=0;
	cout << "\n\nDigite um numero: ";
	cin >> num;
    for(l=2 ; l<=num/2 ; l++)
        if(num%l==0)
            div++;

    if(div==0)
        cout << "� primo" <<endl;
    else
        cout << "N�o � primo" <<endl;
}

int problema9(){
	//9 - Fa�a um algoritmo que receba um n�mero e retorne a tabuada desse n�mero.
		
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
	 //10 - Fa�a um algoritmo que receba um n�mero e retorne o Fatorial desse 
    int n, aux, prod=1;

    cout << "\n\nFatorial de: ";
    cin >> n;

    for(aux=1 ; aux<=n ; aux++)
        prod *= aux;

    cout << "Fatorial: " << prod << endl;
}

int problema11(){
	 //Dada duas lista de n�meros A[1,2,3,4] e B[1,2,5,8], fa�a um algoritmo que retorne a intersec��o das listas
	 
	 int a[] = { 1, 2, 3, 4}, b[] = { 1, 2, 5, 8};
  int i,j;

  cout << "\nConjunto A { 1, 2, 3, 4 } ";
  cout <<"\nconjunto B { 1, 2, 5, 8 } ";

  for (i = 0; i < 4; i++){
  	  for (j = 0; j < 4; j++){
			  if(a[i] == b[j]){
				 cout <<"\nA interseccao cont�m: " << a[i];
			  }
       }
  }
	
}

int problema13(){
	// 13 - Fa�a um algoritmo que receba uma matriz[i,z] como par�metro e imprima todos os valores dessa matriz

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
	//14 - Fa�a um algoritmo que recebe uma palavra e retorne se a palavra � pal�ndromo. (Palavra que se pode ler, indiferentemente, da esquerda para direita ou vice-versa. Ex: osso, Ana e etc)
	
	string s1;
    
    cin >> s1;

    if (s1 == string(s1.rbegin(), s1.rend())) {
        cout << "A palavra � palindromo" << endl;
    } else {
        cout << "A palavra n�o � palindromo" << endl;
    }
}
	
	
	
	
	
	
	
	

