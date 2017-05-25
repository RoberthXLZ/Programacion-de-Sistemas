#include <stdio.h>
void codificar();
int main(){
printf("******Bienvenido a mi programa de Encriptacion******\n");
printf("*********Realizado en C++***************\n");
codificar();
 return 0;
}
//Esta funcion me permite codificar una palabra
void codificar(){
int clave=0;
char nombre[30]={0};
//Pedir por teclado
printf("Ingrese el mensaje: ");
fgets(nombre,30,stdin);
printf("Ingrese la clave Numerica: ");
scanf("%d",&clave);
for(int i=0; i<sizeof(nombre); i++){
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
}
