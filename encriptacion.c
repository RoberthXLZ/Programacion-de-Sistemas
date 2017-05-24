#include <stdio.h>
char letra,letra1,letra2;
int main(){
printf("******Bienvenido a mi programa de Encriptacion******\n");
printf("*********Realizado en C++***************\n");
  letra = 'A'; letra1='a'; letra2='B';
  printf("La letra es %c y su valor decimal es %d.\n\n",letra,letra);
  printf("La letra1 es %c y su valor decimal es %d.\n\n",letra1,letra1);
  printf("La letra2 es %c y su valor decimal es %d.\n\n",letra2,letra2);
//Pedir por teclado

int clave=0;
char nombre[30]={0};
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
	else if(){}
	printf("Letra: %c\n codigoAsci: %d\n"  ,nombre[i],nombre[i]);
	}
}
printf("\n");
 return 0;
}
//Esta funcion me permite codificar una palabra
void codificar(){
}
