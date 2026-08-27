#include<stdio.h>

main(){
	int menu;
	float r, s, t;
	
	printf("Menu: \n1. Menghitung volume kubus \n2. Menghitung luas lingkaran \n3. Menghitung volume silinder");
	printf("\nPilihan: ", menu), scanf("%d", &menu);
	fflush(stdin);
	
	switch(menu){
		case 1:
		printf("Masukkan sisi: "), scanf("%f", &s);
		fflush(stdin);
		printf("Volume kubus: %f", s*s*s);
		break;
		
		case 2:
		printf("Masukkan jari-jari: "), scanf("%f", &r);
		fflush(stdin);
		printf("Luas lingkaran: %f", 3.14*r*r);
		break;
		
		case 3:
		printf("Masukkan jari-jari: "), scanf("%f", &r);
		printf("Masukkan tinggi: "), scanf("%f", &t);
		fflush(stdin);
		printf("Volume silinder: %f", 3.14*r*r*t);
		break;
		
		default:
			printf("Pilihan Menu tidak tersedia");
	}
}
