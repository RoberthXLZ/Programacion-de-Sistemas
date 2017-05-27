#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Declaracion de variables y funciones
int clave=0;
char nombre[30]={0};
void codificar();

int main(int argc, char *argv[]){

	printf("******Bienvenido a mi programa de Encriptacion******\n");
	printf("***********Realizado en C++***************\n\n\n");		
		if(argc==3){	
			printf("----Forma no iterativa-------- \n");
			clave= atoi (argv[2]);	
			strcpy(nombre, argv[1]);
			printf("******Resultado*****\n");
			codificar(clave, nombre);	
		}
		else if(argc==1){
		printf("--------forma iterativa-------\n");
		//Pedir por teclado
		printf("Ingrese el mensaje: ");
		fgets(nombre,30,stdin);
		printf("Ingrese la clave Numerica: ");
		scanf("%d",&clave);
		printf("******Resultado*****\n");
	  	codificar(clave,nombre);
		}
		else{
		printf("Ingresode parametros mayor al solicitado\n");	
		}	
	   return 0;
	}
	//Esta funcion me permite codificar una palabra
	void codificar(int clave, char nombre[]){
	printf("\n*************************************\n");
	for(int i=0; i<strlen(nombre); i++){
		if(nombre[i]>=65 && nombre[i]<=90){
			if(nombre[i]+clave>90){
			nombre[i]=65-90+nombre[i]+clave-1;
			}
			else if(nombre[i]+clave<65){
			nombre[i]=90-65+nombre[i]+clave+1;
			}
			else{
			nombre[i]+=clave;
			}
		}
		else if(nombre[i]>=97 && nombre[i]<=122){
			if(nombre[i]+clave>122){
			nombre[i]=97-122+nombre[i]+clave-1;
			}
			else if(nombre[i]+clave<97){
			nombre[i]=122-97+nombre[i]+clave+1;
			}
			else{
			nombre[i]+=clave;
			}		
		}
		printf("%c",nombre[i]);
	}
	printf("\n**************************************\n\n");
	}
