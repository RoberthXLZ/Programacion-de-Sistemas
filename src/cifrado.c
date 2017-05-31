
	//Esta funcion me permite codificar una palabra
	char *cifradoCiclico(int clave, char *mensaje){
	int i=0;
	printf("\n*************************************\n");
	while(mensaje[i]!='\0'){
		if(mensaje[i]>=65 && mensaje[i]<=90){
			if(mensaje[i]+clave>90){
			mensaje[i]=65-90+mensaje[i]+clave-1;
			}
			else if(mensaje[i]+clave<65){
			mensaje[i]=90-65+mensaje[i]+clave+1;
			}
			else{
			mensaje[i]+=clave;
			}
		}
		else if(mensaje[i]>=97 && mensaje[i]<=122){
			if(mensaje[i]+clave>122){
			mensaje[i]=97-122+mensaje[i]+clave-1;
			}
			else if(mensaje[i]+clave<97){
			mensaje[i]=122-97+mensaje[i]+clave+1;
			}
			else{
			mensaje[i]+=clave;
			}		
		}
		printf("%c",mensaje[i]);
		i++;
	}
	printf("\n**************************************\n\n");
   return mensaje;
	}
