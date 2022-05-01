//Construir la tabla de dividir que el usuario indique
#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	int n, i=0, d=0, resultado;
	
	cout<<"Ingrese un numero: "; cin>>n;
	while(i<11){
		resultado = d/n;
		
		cout<<d<<" / "<<n<<" = "<<resultado<<endl;
	
		d=d+n;
			
		i++;
	}
	
	getch();
	return 0;
}
