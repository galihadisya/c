#include <stdio.h>

int main(){
	
	int input;
	int batasBawah, batasAtas;
	
	scanf("%d", &input);
	scanf("%d %d", &batasBawah, &batasAtas);
	
	if(input >= batasBawah && input <=batasAtas){
		printf("%d diantara %d dan %d", input, batasBawah, batasAtas);
	}
	else 
		printf("%d bukan diantara %d dan %d", input, batasBawah, batasAtas);
	
	return 0;
}
