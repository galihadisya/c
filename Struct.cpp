#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct rectangle{ /*dalam c harus menggunakan typedef di depan struct jika rectangle 
					dalam main tidk diketik struct*/
	int length;
	int width;
};

struct person{
	char name[200];
	int age;
};

struct info{
	person pemilik;
	rectangle luasBangunan;
};

info infoBangunan[100];
int banyakBangunan = 0;

info tambahBangunan(){
	char name[200];
	int age, length, width;
	
	printf("Input nama pemilik : ");
	scanf("%s", name);getchar();
	
	printf("Input umur pemilik : ");
	scanf("%d", &age);getchar();
	
	printf("Input lebar bangunan : ");
	scanf("%d", &width);getchar();
	
	printf("Input panjang bangunan : ");
	scanf("%d", &length);getchar();
	
	info infoBaru = {{"", age}, {length, width}};
	strcpy(infoBaru.pemilik.name, name);
	
	return infoBaru;
}

void lihatBangunan(){
	for(int i = 0; i < banyakBangunan; i++){
		info bangunan = infoBangunan[i];
		printf("%s berumur %d memiliki luas bangunan %d m2\n",
			bangunan.pemilik.name, bangunan.pemilik.age, 
			bangunan.luasBangunan.length*bangunan.luasBangunan.width);
	}
}

int main(){
	
	int input = 0;
	
	do{
		system("cls");
		printf("1. Tambah Bangunan\n");
		printf("2. Lihat Bangunan\n");
		printf("3. Exit\n");
		scanf("%d", &input);getchar();
		switch(input){
			case 1:
				infoBangunan[banyakBangunan++] = tambahBangunan();
			break;
			case 2:
				lihatBangunan();
				getchar();
			break;
			
		}
	}while(input != 3);
	
//	info infoBangunan = {{"Adi", 25}, {20, 10}};
//	
//	printf("%s berumur %d memiliki luas bangunan = %d\n",
//			infoBangunan.pemilik.name, infoBangunan.pemilik.age,
//			infoBangunan.luasBangunan.length*infoBangunan.luasBangunan.width);
//	rectangle kotak1 = {10}; //kalau dalam extension c, harus mengetikkan struct di depan rectangle
//	person orang1 = {"Player 1", 20};
//	
//	printf("Nama = %s\nUmur = %d", orang1.name, orang1.age);
	
	
	return 0;
}
