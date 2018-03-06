/*
nama : Dion Arya Pamungkas
NIm : 10517016
Soal : Soal 4 tugas struktur data
*/

#include <stdio.h>
#include <conio.h>

int list_table[4][6] = {
    {1,1,1,1,0,0},
    {1,0,1,0,0,1},
    {0,1,1,0,1,1},
    {0,0,0,0,1,0}}, i,j;

main() {
	printf("P | Q | P OR Q | P AND Q | NOT P | P XOR Q \n");
    for(i=0;i<4;i++) {
        for(j=0;j<6;j++) {
            printf("%d ", list_table[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
