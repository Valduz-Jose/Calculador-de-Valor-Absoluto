#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int Continuar,Numero,numero;
	system("cls");
	system("color 1F");
	do{
	printf("\t\t\t\t\tCalculadora De Valor Absoluto\t\t\t\t\t");
	printf("\n\n\t\tEscriba el Numero: ");
	scanf("%d",&numero);
	Numero=abs(numero);
	printf("\n\tEl Valor Absoluto es: %d",Numero);
	printf("\n\n\tIntroduce (0) para volver a iniciar: ");
	scanf("%d",&Continuar);
	system("cls");
	} while(Continuar==0);
	system("cls");
	printf("\t\t\t\t\tCalculadora De Valor Absoluto\t\t\t\t\t");
	printf("\n\n\n\n\t\t\t\t\tHasta luego");
	return 0;
}
