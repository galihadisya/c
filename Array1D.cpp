#include <stdio.h>
#include <string.h>

int main(){
	//ASCII
//	printf("%d\n", 'a'); 97
//	printf("%d\n", 'z'); 122
//	printf("%d\n", 'A'); 65
//	printf("%d\n", 'Z'); 90
	
	char str[30];
	
	scanf("%[^\n]", str);
	getchar();
	
	int panjang = strlen(str);
	
	for(int i = 0; i < panjang; i++){
		if(str[i] >= 97 && str[i] <= 122){ //97 bisa diganti 'a' 122 bisa diganti 'z'
			str[i] -= 32;
		}
	}
	printf("%s", str); // cara cepat menggunakan <string.h> bisa ("%s", strupr(str)); strlwr untuk lowercase
	
	
//	int listAngka[20];
//	char str[20][100]; //untuk string ada dua [][]100 ke samping, 20 kolom ke bawah
//	
//	scanf("%s", str[0]);
//	strcpy(str[0], "Halo");
//	printf("%s\n", str[0]);
//	
	
	
//	scanf("%s", str);
//	str[1] = 'a';
//	printf("%s",str);


//	listAngka[0] = 1;
//	printf("%d\n", listAngka[0]);
//	listAngka[0] =2;
//	printf("%d\n", listAngka[0]);
	
	return 0;
}
