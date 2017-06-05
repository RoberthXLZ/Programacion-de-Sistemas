#include <stdio.h>
#include <string.h>
char cifrado[100]={0};	char resultado[100]={0};
//Esta funcion me permite codificar una palabra
	char *cifradoCiclico(char* mensaje, int llave){
	int i=0;
	printf("\n*************************************\n");
	while(mensaje[i]!='\0'){
		if(mensaje[i]>=65 && mensaje[i]<=90){
			if(mensaje[i]+llave>90){
			mensaje[i]=65-90+mensaje[i]+llave-1;
			}
			else if(mensaje[i]+llave<65){
			mensaje[i]=90-65+mensaje[i]+llave+1;
			}
			else{
			mensaje[i]+=llave;
			}
		}
		else if(mensaje[i]>=97 && mensaje[i]<=122){
			if(mensaje[i]+llave>122){
			mensaje[i]=97-122+mensaje[i]+llave-1;
			}
			else if(mensaje[i]+llave<97){
			mensaje[i]=122-97+mensaje[i]+llave+1;
			}
			else{
			mensaje[i]+=llave;
			}		
		}
		printf("%c",mensaje[i]);
		i++;
	}
	printf("\n**************************************\n\n");
   return mensaje;
	}

//CIFRADO AUTOLLAVE

char* cifradoAutollave(char* mensaje, char* llave){
	int n1,n2,i,j=0;  
	char lista[30]="ABCDEFGHIJKLMNOPQRSTUVWXYZ' '",cadena[30]={0};
	
    	n1=strlen(llave);
    	n2=strlen(lista);
	printf("%d",n2);

for(i =0; i <n1+n2; i++){
	if(i<n1){
		cadena[i]=llave[i];
	}
	if(i>=n1&&i<26){
	cadena[i]=lista[j];	
	j++;	
	}
	if(i==27){
		cadena[i]=' ';	
	}
	
	}
	
printf("ALFABETO 1:%s",lista);
printf("\nALFABETO 2:%s",cadena);
int k;
		printf("\nPALABRA CIFRADA: ");	
for(k =0;k<strlen(mensaje);k++){
	for(i =0; i<n2; i++){
		if(mensaje[k]==lista[i]){				
			resultado[k]=cadena[i];
		}
	}
}
printf("\n");
return resultado;
}

//cifrado Contraseña

char *cifradoContrasenia (char *mensaje, char *llave){
	//Formar la Tabula
	int fila=26, col=26, pos, i,j;
	char tabula[fila][col]; 
	for(i=0;i<fila; i++){
		pos=0;
		for(j=0;j<col; j++){

			if('A'+i+j>'Z' && i>0){
			tabula[i][j]='A'+pos;
			pos++;
			}
			else if('A'+i+j=='Z'){
			tabula[i][j]='Z';
			}
			else{
			tabula[i][j]='A'+i+j;
			}
		}
	}

	//COncatenar la Palabra a la contraseña recibida
	int a=0,b=0;
	char new_word[200]={0};
	while(llave[a]!='\0'){
		if(mensaje[a]==32){
		new_word[a]=mensaje[a];
		
		}	
		else{
		new_word[a]=llave[b];
		b++;	
		}
		a++;
	}
		new_word[a]=llave[a-1];
		int l=0;
		int m =a+1;
		for(m=0;mensaje[l]!='\0';m++){
			if(mensaje[l]==32){l++;}
			new_word[m]=mensaje[l];
			l++;
		}
//Ahora generaremos el codigo

int h, x;
int ifil,icol;

for(h=0; mensaje[h]!='\0';h++){
	if(mensaje[h]==32){
	cifrado[h]=mensaje[h];
	h++;	
	}
	for(x=0;x<fila;x++){
		if(tabula[x][0]==mensaje[h]){	
		 ifil=x;
		}
		if(tabula[0][x]==new_word[h]){
		icol=x;
		
			
		}
	}
cifrado[h]=tabula[ifil][icol];	
}

printf("%s", mensaje);
printf("\n%s",new_word);
printf("\nEl mensaje Cifrado es: %s",cifrado);
printf("\n");
	return cifrado; 
			
}
