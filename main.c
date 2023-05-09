#include <stdio.h>
#include <stdlib.h>

//Aleyna ERARSLAN

int linearSearch ( int dizi[],int n,int aranan)
{
	int i;
	for(i=0 ;i<n ;i++) //0.indisten dizi boyutuna kadar olan indislerde sayiyi arayacak döngü.
	{
		if(aranan == dizi[i])  //eðer aradaýðýmýz sayiyi bulmuþsak i
		return i; 
	}
	return -1; //bulamamýþsak buraya gelecek.
}

int main(int argc, char *argv[]) {

	
	int aranan;  //dizide aramak istediðimiz sayiyi temsil edicek.
	int n;  //dizimizin boyutunu temsil edecek
	printf("******LINEAR SEARCH ILE DIZIDE ELEMAN ARAMA******\n\n");
	printf("dizinizin boyutunu giriniz: ");  //dizide kaç eleman olacaðýný kullanýcýdan alýyoruz.
	scanf("%d",&n); 
	
	
	int dizi[n]; //arama yapacaðýmýz dizi
	int i=0;
	while(i<n)
	{
		printf("girilecek sayi: ");
		scanf("%d",&dizi[i]);
		i++;
	}
	printf("\n");
	printf("dizide aranan sayiyi giriniz: ");
	scanf("%d",&aranan);
	printf("\n");
	//dizide aranan elemanýn konumunu bulur.
	int sonuc=linearSearch(dizi,n,aranan);
	//sonuc kontrolü
	if(sonuc== -1)
	printf("aradiginiz sayi dizide bulunamadi..\n");
	else
	printf("aranan sayi :%d dizide bulunuyor...",aranan);
	return 0;
}
