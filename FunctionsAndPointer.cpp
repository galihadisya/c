#include <stdio.h>

	//function
//	void printHelloWorld(){
//		printf("Hello World");
//	}
//	int getNumber(){
//		
//		return 5;
//	}

	int sum(int *first, int *second){
		*first = 4;
		int total = *first + *second;
		return total;
	}
	
int main(){


	
	//pointer
//	int a = 0;
//	int *p;
//	int **p2;
//	p = &a;
//	p2 = &p;
//	
//	printf("%d\n", a); //apabila &a adalah alamat dari a
//	printf("%d\n", p);// pointer p (*p) merujuk ke nilai a yaitu 0, sedangkan p merujuk ke &a
//	printf("%d\n", **p2);// pointer pointer p2 (**p2) merujuk ke nilai awal yaitu a yg bernilai 0
//						//pointer p2 (*p2) merujuk ke value dari p yaitu berisi alamat si a (&a)

//	passing by value
//	passing by reference
//	int a = getNumber();
//	printf("%d\n", a);
//	printHelloWorld();

	int first = 3;
	int second = 5;
	int hasilSum = sum(&first, &second);
//	printf("%d", hasilSum);
	printf("%d", first);
		
	return 0;
}
