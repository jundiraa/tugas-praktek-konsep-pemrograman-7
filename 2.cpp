#include<stdio.h>

main(){
	int operasi;
	float number1, number2, result;
	
	printf("Operasi: \n1. * \n2. / \n3. + \n4. -");
	printf("\nPilihan: ", operasi), scanf("%d", &operasi);
	printf("Masukkan bilangan: "), scanf("%f", &number1);
	printf("Masukkan bilangan: "), scanf("%f", &number2);
	fflush(stdin);
	
	switch(operasi){
		case 1:
		printf("%f",number1*number2);
		break;
		
		case 2:
		printf("%f",number1/number2);
		break;
		
		case 3:
		printf("%f",number1+number2);
		break;
		
		case 4:
		printf("%f",number1-number2);
		break;
		
		default:
		printf("Invalid operation");
	}
}
