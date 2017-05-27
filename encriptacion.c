#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//Declaracion de variables y funciones
int clave=0;
char nombre[30]={0};
void codificar();
void codificar_morse(char frase[]);
   //Funcion Principal
	int main(int argc, char *argv[]){
	printf("******Bienvenido a mi programa de Encriptacion******\n");
	printf("***********Realizado en C++***************\n\n\n");		
		if(argc==3){	
			printf("----Forma no interactiva-------- \n");
			clave= atoi (argv[2]);	
			strcpy(nombre, argv[1]);
			printf("******Resultado*****\n");
			printf("Codificacion ciclica:\t");			
			codificar(clave, nombre);			
			printf("Codificacion en morse:\t");
			codificar_morse(nombre);	
		}
		else if(argc==1){
			printf("--------forma interativa-------\n");
			//Pedir por teclado
			printf("Ingrese el mensaje: ");
			fgets(nombre,30,stdin);
			printf("Ingrese la clave Numerica: ");
			scanf("%d",&clave);
			printf("******Resultado*****\n");
			printf("Codificacion ciclica: ");
		  	codificar(clave,nombre);
			printf("Codificacion en morse: ");
			codificar_morse(nombre);
		}
		
		else{	printf("Ingresode parametros mayor al solicitado\n");	}	
	  
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


//Esta funcion me permite codificar una palabra en clave
	void codificar_morse(char frase[]){
	printf("\n*************************************\n");
	for(int i=0; i<strlen(frase); i++){
		switch(frase[i]){
		case 65: case 97:
		printf(".-  ");//A o a
		break;
		case 66: case 98:
		printf("-...  ");//B o b
		break;	
		case 67: case 99:
		printf("-.-.  ");//C o c
		break;
		case 68: case 100:
		printf("-..  ");//D o d
		break;	
		case 69: case 101:
		printf(".  ");//E o e
		break;
		case 70: case 102:
		printf("..-.  ");//F o f
		break;	
		case 71: case 103:
		printf("--.  ");//G o g
		break;
		case 72: case 104:
		printf("....  ");//H o h
		break;	
		case 73: case 105:
		printf("..  ");//I o i
		break;	
		case 74: case 106:
		printf(".---  ");//J o j
		break;
		case 75: case 107:
		printf("-.-  ");//K o k
		break;	
		case 76: case 108:
		printf(".-..  ");//L o l
		break;
		case 77: case 109:
		printf("--  ");//M o m
		break;	
		case 78: case 110:
		printf("-.  ");//N o n
		break;
		case 79: case 111:
		printf("---  ");//O ú o
		break;	
		case 80: case 112:
		printf(".--.  ");//P o p
		break;		
		case 81: case 113:
		printf("--.-  ");//Q o q
		break;
		case 82: case 114:
		printf(".-.  ");//R o r
		break;	
		case 83: case 115:
		printf("...  ");//S o s
		break;
		case 84: case 116:
		printf("-  ");//T o t
		break;	
		case 85: case 117:
		printf("..-  ");//U o u
		break;
		case 86: case 118:
		printf("...-  ");//V ú v
		break;	
		case 87: case 119:
		printf(".--  ");//W o w
		break;		
		case 88: case 120:
		printf("-..-  ");//X o x
		break;
		case 89: case 121:
		printf("-.--  ");//Y o y
		break;
		case 90: case 122:
		printf("--..  ");//Z o z
		break;
		case ' ':
		printf ("/");
		break;
		default :
		printf("%c", frase[i]);
		break;	
	}
  }
	printf("\n**************************************\n\n");
	}
