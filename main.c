#include <stdio.h>
#include <stdlib.h>

//Aleyna ERARSLAN

int linearSearch ( int dizi[],int n,int aranan)
{
	int i;
	for(i=0 ;i<n ;i++) //0.indisten dizi boyutuna kadar olan indislerde sayiyi arayacak d�ng�.
	{
		if(aranan == dizi[i])  //e�er arada���m�z sayiyi bulmu�sak i
		return i; 
	}
	return -1; //bulamam��sak buraya gelecek.
}

int main(int argc, char *argv[]) {

	
	int aranan;  //dizide aramak istedi�imiz sayiyi temsil edicek.
	int n;  //dizimizin boyutunu temsil edecek
	printf("******LINEAR SEARCH ILE DIZIDE ELEMAN ARAMA******\n\n");
	printf("dizinizin boyutunu giriniz: ");  //dizide ka� eleman olaca��n� kullan�c�dan al�yoruz.
	scanf("%d",&n); 
	
	
	int dizi[n]; //arama yapaca��m�z dizi
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
	//dizide aranan eleman�n konumunu bulur.
	int sonuc=linearSearch(dizi,n,aranan);
	//sonuc kontrol�
	if(sonuc== -1)
	printf("aradiginiz sayi dizide bulunamadi..\n");
	else
	printf("aranan sayi :%d dizide bulunuyor...",aranan);
	return 0;
}
