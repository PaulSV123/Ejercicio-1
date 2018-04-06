//------------------------EJERCICIO 1-------------------------------
#include <iostream>
using namespace std;

void valor1(int x,int y,int &suma)
{
    suma=x+y;
}
void valor2(int x,int y, int suma)
{
    suma=x+y;
}
int main(){
	int x=4;
	int y=5;
	int suma=0;
	valor1(x,y,suma);
	valor2(x,y,suma);
	cout<<suma<<" <- Valor obtenido";
}
