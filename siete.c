#include <stdio.h>
#include <stdlib.h>


void matriz(){
	int numeros[100][100],filas,columnas;
	/*requerimos de un numro de filas y columnas*/
	printf("Digite el numero de filas: ");
	scanf("%i" ,&filas);
	printf("Digite el numero de columnas: "); 
	scanf("%i" ,&columnas);
	
	
	if(filas<=8 && columnas<=8){
	/*primero se crea calumna por columna, y estas formaran las filas*/
	/*Y se llenara de numeros aleatorios*/
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			numeros[i][j]= rand() % 5;
		}
	} 
	
	printf("\nLa matriz\n");
	/*DE esta forma se imprime la matriz*/
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			printf("%i", numeros[i][j]);
		}
		printf("\n");
	}
	} if(filas>=9  || columnas>=9)
	{
	printf("Tamaño de matriz invalida\n");
	}
	
}

int main(){
matriz();
return 0;
}
