#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main() {
	FILE *PF; char C;
	
	if((PF=fopen("kalimat.txt", "w")) == NULL) {
		printf("file tidak dapat dibuka");
		exit(1);
	}
	
	printf("Input sebuah nilai string = ");
	while((C=getche())!='\r')
	fputc(C, PF);
	fclose(PF);
	
	getch();
	return 0;
}
