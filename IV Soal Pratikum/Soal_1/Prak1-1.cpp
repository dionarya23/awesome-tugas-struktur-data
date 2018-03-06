/*
Soal No 1
Nama : Dion Arya Pamungkas
NIM : 10517016
Strutur Data Prak1-1
*/
#include <stdio.h>
#include <conio.h>
int data[7], i, jumlah;
float rata2;
main() {
	
	for (i=0;i<7;i++){
		printf("Masukan Element ke-%d : ", i+1);
		scanf("%d", &data[i]);
		jumlah += data[i];
	}
	rata2 = jumlah/7;
	printf("Hasil Nya \n===================\n");
	
	for (i=0;i<7;i++){
		printf("Element ke-%d : %d \n", i+1, data[i]);
	}
	
	printf("Jumlah Dari Data : %d \n", jumlah);
	printf("Rata - Rata : %1.f", rata2);
	
	
	getch();
	return 0;
}
