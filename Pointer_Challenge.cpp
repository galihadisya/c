#include <stdio.h>



int main(){
	int listAngka[10];
	
	listAngka[0] = 0;
	listAngka[1] = 0;
	listAngka[2] = 0;
	listAngka[3] = 0;
	listAngka[4] = 0;
	listAngka[5] = 0;
	listAngka[6] = 0;
	listAngka[7] = 0;
	listAngka[8] = 0;
	listAngka[9] = 0;
	
	printf("0 = %d\n", &listAngka[0]);
	printf("1 = %d\n", &listAngka[1]);
	printf("2 = %d\n", &listAngka[2]);
	printf("3 = %d\n", &listAngka[3]);
	printf("4 = %d\n", &listAngka[4]);
	printf("5 = %d\n", &listAngka[5]);
	printf("6 = %d\n", &listAngka[6]);
	printf("7 = %d\n", &listAngka[7]);
	printf("8 = %d\n", &listAngka[8]);
	printf("9 = %d\n", &listAngka[9]);
	
	return 0;
}
