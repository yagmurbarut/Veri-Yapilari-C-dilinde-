#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
	
	char takimadi[40];
	int kurulusyili;
	
} takim;

typedef struct{
	
	char adsoyad[50];
	int yas;
	takim takim;
} futbolcu;

int main(){
	
	futbolcu fut;
	strcpy(fut.adsoyad,"volkan demirel");
	fut.yas=30;
	fut.takim.kurulusyili=1907;
	strcpy(fut.takim.takimadi,"Fenerbahce");
	
	printf("futbolcu bilgileri: %s, %d\n", fut.adsoyad, fut.yas);
	printf("takim bilgileri: %s, %d", fut.takim.takimadi, fut.takim.kurulusyili);

 return 0;
}
