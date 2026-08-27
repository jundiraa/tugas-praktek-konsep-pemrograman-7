#include<stdio.h>

main(){
	char operasi;
	int menu;
	float number1, number2, result;
	
	printf("Operasi: \n1. * \n2. / \n3. + \n4. -"), scanf("%c", &operasi);
	printf("\nPilihan: ", menu), scanf("%d", &menu);
	fflush(stdin);
	
	switch(operasi){
		case 1:
		printf("Masukkan bilangan: "), scanf("%f", &number1);
		printf("Masukkan bilangan: "), scanf("%f", &number2);
		printf("Perkalian %f", number1*number2);
		fflush(stdin);	
		break;
		
		case 2:
		printf("Masukkan bilangan: "), scanf("%f", &number1);
		printf("Masukkan bilangan: "), scanf("%f", &number2);
		printf("Pembagian %f", number1/number2);
		fflush(stdin);
		break;
		
		case 3:
		printf("Masukkan bilangan: "), scanf("%f", &number1);
		printf("Masukkan bilangan: "), scanf("%f", &number2);
		printf("Pertambahan %f", number1+number2);
		fflush(stdin);
		break;
		
		case 4:
		printf("Masukkan bilangan: "), scanf("%f", &number1);
		printf("Masukkan bilangan: "), scanf("%f", &number2);
		printf("Pengurangan %f", number1-number2);
		fflush(stdin);
		break;
		
		default:
			printf("Invalid operation");
	}
}
