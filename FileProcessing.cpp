#include <stdio.h>

int main(){
	
	//Filebase
	
	//read, write, append
	//r -> read
	//w -> write
	//a -> append (menambahkan data)
	//r+ -> read, write (harus ada data terlebih dahulu, dan writenya akan mengganti dari awal data)
	//w+ -> read, write (tidak harus ada data dulu, write akan menimpa file lama menjadi file baru)
	//a+ -> append, read
	
	//open, process, close
	
	char txt[200];
	FILE *fp;
	
	fp = fopen("data.txt", "a+");
	
	fprintf(fp, " Squarepants");
	rewind(fp);//wajib digunakan saat menggunakan command yg ada plusnya, agar cursor kembali ke awal
	fscanf(fp, "%[^\n]", txt);
	printf("%s", txt);
	
	fclose(fp); //program ditutup agar data notepad bisa kita ubah/hapus saat sedang dirunning programnya
	
	return 0;
}
