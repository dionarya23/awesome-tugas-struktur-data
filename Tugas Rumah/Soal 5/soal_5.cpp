/*
nama : Dion Arya Pamungkas
NIm : 10517016
Soal : Soal 5 tugas struktur data
*/

#include <stdio.h>
#include <conio.h>
int nilai[10], i, j, kkm, jumlah;
main() {

    printf("Masukan Nilai KKM : ");
    scanf("%d", &kkm);

    for(i=0;i<10;i++) {
        printf("Masukan Siswa Ke-%d : ",i+1);
        scanf("%d", &nilai[i]);
    }

    for(j=0;j<10;j++) {
        if(nilai[j] < kkm) {
            jumlah +=1;
        }
    }

    printf("Jumlah Siswa Yang Di remedial sebanyak %d ", jumlah);

    getch();
    return 0;
}
