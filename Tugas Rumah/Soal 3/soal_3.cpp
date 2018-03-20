/*
Nama : Dion Arya Pamungkas
Nim : 10517016
tugas : Soal Tugas Rumah no 3
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

char kata[100];
int panjang, i, huruf_vokal, non_vokal;

main() {
    printf("Masukan Sebuah kalimat : ");
    gets(kata);

    panjang = strlen(kata);
    for (i=0; i<panjang; i++) {
        
        if (tolower(kata[i]) == 'a' 
		     || tolower(kata[i]) == 'i' 
		     || tolower(kata[i]) == 'u' 
			 || tolower(kata[i]) == 'e' 
			 || tolower(kata[i]) == 'o') {
			 	
            huruf_vokal +=1;
            
        } else if( tolower(kata[i]) != ' ') {
            non_vokal +=1;
        }
    }

    printf("Huruf Vokal Sebanyak : %d \n", huruf_vokal);
    printf("Huruf Non Vokal Sebanyak : %d \n", non_vokal);
    
    getch();
    return 0;
}
