/*
Nama : Dion Arya Pamungkas
Nim : 10517016
Tugas : Soal 1
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
char nama[100], nama2[100];
int i, j=0;
main() {
	
	printf("Masukan Nama : "); gets(nama);
	
	for(i=(strlen(nama)-1);i>=0;i--) {
		nama2[j++] = nama[i];
	}
	
	printf("Hasil Nya \n===================\nSebelum Di balik : %s \n", nama);
	printf("Nama Sesudah Dibalik : %s ", nama2);
	
	getch();
	return 0;
}
