#include <stdio.h>

int main(){
	
//	repetition / looping
//	for, while, do while
//	break, continue

//	for(int i = 1; i <= 10; i+=2){
//		if (i == 5) break; //kalau break diganti continue, 5 nya ilang
//		
//		printf("%d\n", i);
//	}
	
//	while mulai dari sini (comment)
//	printf("While:\n");
//	int j = 11;
//	while(j <= 10){
//		printf("%d\n", j++);
//		j++; bisa juga ditulis seperti ini (comment)
//	}
//	
//	printf("Do While:\n");
//	int k = 11;
//	do{
//		printf("%d\n", k++);//kalau do, print dulu baru melihat kondisi, sebaliknya dengan while
//	}while(k <= 10);

//	nested loop
//	for(int i = 0; i < 5; i++){
//		printf("*****\n");
//	}

// size
//	int size = 10;
//	for(int i = 0; i < size; i++){
//		for(int j = 0; j < size; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
	int size = 10;
	scanf("%d", &size);
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			// comment i == j membuat bintang diagonal ke kanan i == size-j-1 ke kiri
			if(i == 0 || i == j || i == size-j-1 || i == size-1 || j == 0 || j == size-1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}

