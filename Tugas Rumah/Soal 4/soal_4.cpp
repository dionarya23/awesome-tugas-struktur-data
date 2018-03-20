/*
nama : Dion Arya Pamungkas
NIm : 10517016
Soal : Soal 4 tugas struktur data
*/

#include <stdio.h>
#include <conio.h>

void output();

int list_table[4][6] = {
    {1,1,1,1,0,0},
    {1,0,1,0,0,1},
    {0,1,1,0,1,1},
    {0,0,0,0,1,0}}, i,j;
    
char judul_header[6][20] = {"P", "Q", "P OR Q", "P AND Q", "NOT P", "P XOR Q"};
    

main() {

	output();

    getch();
    return 0;
}

void output() {
	
	for(i=0;i<6;i++) {
		printf("|  %s  |", judul_header[i]);
	}
	printf("\n---------------------------------------------------------------");
	
	printf("\n");
    for(i=0;i<4;i++) {
    	
        for(j=0;j<6;j++) {
        	
        	if(j!=2 && j!=3 && j!=4 && j!=5) {
        		printf("|  %d  |", list_table[i][j]);
			}else{
				printf("|     %d    |", list_table[i][j]);
			}
            
        }
        printf("\n");
    }
    	printf("---------------------------------------------------------------");
    
}
