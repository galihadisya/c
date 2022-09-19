#include<stdio.h>


int main(){
	
	int angka_bulat;
	float angkaKoma = 1.5f;
	char karakter = 'a';
	char string[100] = "Hello";
	
	
	scanf("%d", &angka_bulat);
//	getchar();
	printf("%d\n", angka_bulat);
	
	scanf("%f", &angkaKoma);
//	getchar();
	printf("%.2f\n", angkaKoma);
	
	scanf("%c", &karakter);
	getchar();
	printf("%c\n", karakter);
	
	scanf("%[^\n]", string);
//	getchar();
	printf("%s\n", string);
	
	/* \n sebagai spasi
	getchar agar \n tidak masuk sebagai char dan input char tidak terskip
	"%s" hanya satu kata pada string sedangkan "%[^\n]" lebih dari satu kata sampai enter*/
	
	return 0;
}
