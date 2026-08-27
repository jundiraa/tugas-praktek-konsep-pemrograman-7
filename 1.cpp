#include<stdio.h>

main(){
	char letter;
	int pilihan;
	float sum, valid_flag;
	
	printf("Pilihan: \nX \nZ \nA");
	printf("\n\nPilih: "), scanf("%c", &letter);
	fflush(stdin);
	
	switch(letter){
		case 'X':
		printf("sum= 0");
		break;
		
		case 'Z':
		printf("valid_flag= 1");
		break;
		
		case 'A':	
		printf("sum= 1");
		break;
		
		default: printf("Unknown letter %c\n", letter);
	}
}
