//Funcion Principal
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cifrado.h"
#include "codificacion.h"
char mensaje[100];
char password[100];
char cifrado;
int clave=0;
	
int main(int argc, char *argv[]){
	fflush(stdin);	
	printf("******Bienvenido a mi programa de Encriptacion******\n");
	printf("***********Realizado en C++***************\n\n\n");		
		if(argc==4){	;
			printf("----Forma no interactiva-------- \n");
			clave= atoi (argv[2]);	
			strcpy(mensaje, argv[1]);
			
			printf("******Resultado*****\n");
			printf("Codificacion ciclica:\t");			
			//codificar(clave, mensaje);			
			printf("Codificacion en morse:\t");
			//codificar_morse(mensaje);	
		}
		else if(argc==1){
			printf("--------forma interativa-------\n");
			//Pedir por teclado
			printf("Ingrese el mensaje: ");
			fgets(mensaje,100,stdin);
			mensaje[strlen(mensaje) -1] ='\0';			
			printf("\n");
			printf("Ingrese una contraseña: ");
			fgets(password,100,stdin);
			password[strlen(mensaje) -1] ='\0';
			printf("Ingrese el tipo de Cifrado: ");
        		scanf("%c", &cifrado);
			printf("\n");
			fflush(stdin);
			printf("Ingrese la clave Numerica: ");
			scanf("%d",&clave);
			fflush(stdin);
			if(cifrado=='C'){
				printf("\n******Resultado*****\n");
				printf("Codificacion ciclica: \n");
			  printf("CICLICO: %s",cifradoCiclico(mensaje,clave));
			}
			else if(cifrado=='A'){
				printf("******Resultado*****\n");
				printf("Codificacion Autollave:");
				printf("%s",cifradoAutollave(mensaje,password));	
			}
			else if(cifrado=='P'){
				printf("******Resultado*****\n");
				printf("Codificacion por contraseña:");	
				printf("%s",cifradoContrasenia(mensaje,password));
			}
			else
			{
				printf("Tipo de Cifrado Inexistente"); 
				
			}
			printf("Ingrese la clave Numerica: ");
			printf("******Resultado*****\n");
			printf("Codificacion ciclica: ");
		  	//printf("CICLICO: %s",codificar(clave,mensaje));
			
		}
		
	else
	{
	printf("Ingresode parametros mayor al solicitado	|\n");	
	}	
	  
 return 0;
	}
