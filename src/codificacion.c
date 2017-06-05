#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char nuevo[100]={0};

char *claveMorse(char cadena []){
    char Morse[48][7]={0};
    char Simbolos[48]={0};
    
strcpy(Morse[0],".-"); // A
    Simbolos[0]='A';
    strcpy(Morse[1],"-..."); // B
    Simbolos[1]='B';
    strcpy(Morse[2],"-.-."); // C
    Simbolos[2]='C';
    strcpy(Morse[3],"-.."); // D
    Simbolos[3]='D';
    strcpy(Morse[4],"."); // E
    Simbolos[4]='E';
    strcpy(Morse[5],"..-."); // F
    Simbolos[5]='A';
    strcpy(Morse[6],"--."); // G
    Simbolos[6]='G';
    strcpy(Morse[7],"...."); // H
    Simbolos[7]='H';
    strcpy(Morse[8],".."); // I
    Simbolos[8]='I';
    strcpy(Morse[9],".---"); // J
    Simbolos[9]='J';
    strcpy(Morse[10],"-.-"); // K
    Simbolos[10]='K';
    strcpy(Morse[11],".-.."); // L
    Simbolos[11]='L';
    strcpy(Morse[12],"--"); // M
    Simbolos[12]='M';
    strcpy(Morse[13],"-."); // N
    Simbolos[13]='N';
    strcpy(Morse[14],"---"); // O
    Simbolos[14]='O';
    strcpy(Morse[15],".--."); // P
    Simbolos[15]='P';
    strcpy(Morse[16],"--.-"); // Q
    Simbolos[16]='Q';
    strcpy(Morse[17],".-."); // R
    Simbolos[17]='R';
    strcpy(Morse[18],"..."); // S
    Simbolos[18]='S';
    strcpy(Morse[19],"-"); // T
    Simbolos[19]='T';
    strcpy(Morse[20],"..-"); // U
    Simbolos[20]='U';
    strcpy(Morse[21],"...-"); // V
    Simbolos[21]='V';
    strcpy(Morse[22],".--"); // W
    Simbolos[22]='W';
    strcpy(Morse[23],"-..-"); // X
    Simbolos[23]='X';
    strcpy(Morse[24],"-.--"); // Y
    Simbolos[24]='Y';
    strcpy(Morse[25],"--.."); // Z
    Simbolos[25]='Z';
    strcpy(Morse[30],"-----"); // 0
    Simbolos[30]='0';
    strcpy(Morse[31],".----"); // 1
    Simbolos[31]='1';
    strcpy(Morse[32],"..---"); // 2
    Simbolos[32]='2';
    strcpy(Morse[33],"...--"); // 3
    Simbolos[33]='3';
    strcpy(Morse[34],"....-"); // 4
    Simbolos[34]='4';
    strcpy(Morse[35],"....."); // 5
    Simbolos[35]='5';
    strcpy(Morse[36],"-...."); // 6
    Simbolos[36]='6';
    strcpy(Morse[37],"--..."); // 7
    Simbolos[37]='7';
    strcpy(Morse[38],"---.."); // 8
    Simbolos[38]='8';
    strcpy(Morse[39],"----."); // 9
    Simbolos[39]='9';
    strcpy(Morse[40],"/"); // 9
    Simbolos[40]=' ';
    
int i,j,k,n=0;
printf("\nMensaje cifrado en Morse: ");
for(i=0;i<strlen(cadena);i++){
	
	for(j=0;j<48;j++){
	
		if(cadena[i]==Simbolos[j]){
			for(k=0;k<7;k++){
			nuevo[n]=Morse[j][k];
			printf("%c",nuevo[n]); 
			n++;
			
		 }
		 break;
		}	
}

}
printf("\n");

 return nuevo;   
}
