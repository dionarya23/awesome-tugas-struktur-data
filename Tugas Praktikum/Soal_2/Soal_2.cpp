/*
Nama : Dion Arya Pamungkas
Nim : 10517016
Soal 2 Tugas Praktikum
*/
#include <stdio.h>
#include <conio.h>
int i,j, k=1, l=1, kolom = 2, baris = 100, tabel_fotokopi[100][2];
main() {
	
	for(i=0;i<baris;i++) {
		for(j=0;j<kolom;j++) {
			
			if (j == 0) {
				tabel_fotokopi[i][j] = k++;
			} else {
		tabel_fotokopi[i][j] = 80*l++;		
			}
		}
	}
	
	printf("Tabel Fotokopi \n=================\n\n");
	printf("=====================\n");
	printf("== Lembar = Harga ==\n");
	for(i=0;i<baris;i++) {
		printf("== ");
		for(j=0;j<kolom;j++) {
			printf(" %d    = ", tabel_fotokopi[i][j]);
		}
		printf("\n=====================\n");
	}
	
	getch();
	return 0;
} 
