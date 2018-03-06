/*
Nama : Dion Arya Pamungkas
Nim : 10517016
Tugas : Prak1-2
*/
#include <stdio.h>
#include <conio.h>

int nilai[10], i, jumlah;
float rata2;

main() {
	
	for(i=0; i<10; i++) {
		printf("Masukan Nilai Mahasiswa Ke-%d : ", i+1);
		scanf("%d", &nilai[i]);
		jumlah += nilai[i];
	}
	
	rata2 = jumlah/10;
	printf("Hasil Pemprograman I \n===================\n");
	
	for (i=0; i<10; i++){
		printf("Mahasiswa ke-%d : %d \n", i+1, nilai[i]);
	}
	
	printf("Jumlah Nilai : %d \n", jumlah);
	printf("Rata - Rata Nilai : %1.f", rata2);

	
}
