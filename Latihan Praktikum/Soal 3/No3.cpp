#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define panjang 267

main() {
	FILE *PF;
	char C;
	
if((PF=fopen("kalimat.txt", "w")) == NULL) {
		printf("File tidak bisa di buat");
		exit(1);
  }
  
  printf("Input sebuah nilai string  = ");
 
 	while( (C=getche()) != '/r' )
 		fputc(C, PF);
 	
	 fclose(PF);
	
	getch();
	return 0;
}
