#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
	char nama[25];
	int umur;
	char alamat[50];
	
	printf("masukkan nama anda   : ");gets(nama);
	printf("masukkan alamat Anda : ");gets(alamat);
	printf("masukkan umur Anda   : ");scanf("%d",umur);
	printf("-------------------------------");
	printf("\nNama anda    : %s",nama);
	printf("\n Alamat anda : %s",alamat);
	printf("\nUmur anda    :%d",umur);
	
	return 0;
}
