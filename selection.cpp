#include <stdio.h>

int main (){
	
//	SELECTION
/*  
	1. if, else if, else
	2. Switch case
	3. Ternary if

*/
//	int angka;
//	scanf("%d", &angka);
//	
//	if (angka == 0){
//		printf("nol");
//	}
//	else if (angka%2 == 1){
//		printf("ganjil");
//	}
//	else{
//		printf("genap");
//	}

//switch case
//	int angka;
//	scanf("%d", &angka);
//	switch(angka){
//		case 0:
//			printf("nol");
//			break;
//		case 1:
//			printf("satu");
//			break;
//		case 5:
//			printf("lima");
//			break;
//		default:
//			printf("Selain nol, satu, dan lima");
//	}
//	ternary if
	int angka;
	scanf("%d", &angka);
	
//	kondisi ? benar : salah
//	printf("%s", (angka%2 == 0? "genap" : "ganjil"));
	printf("%s", (angka < 2? "kurang dari dua" : 
					angka > 2? "lebih dari dua" : "2"));
	return 0;
}
