#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

main() {
	
	FILE *PF; char C;
	int kalimat, vokal;
	
	if((PF=fopen("kalimat.txt", "r")) == NULL) {
		printf("file tidak dapat dibuka");
		exit(1);
	}
	
	while((C=fgetc(PF))!=EOF){
		putchar(C);
		if(C=='.'){
			kalimat += 1;
		} else {
			switch(tolower(C)) {
				case 'a': vokal += 1; break;
				case 'i': vokal += 1; break;
				case 'u': vokal += 1; break;
				case 'e': vokal += 1; break;
				case 'o': vokal += 1; break;
			}
		}
	}
	
	
	printf("\nJumlah Kalimat =  %d\n", kalimat);
	printf("Jumlah Huruf Vokal = %d", vokal);
	fclose(PF);
	
	getch();
	return 0;

}
