#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci{
	
	char adi[30];
	int sinifi;
	char bolumu[50];
	int numarasi;
};

typedef struct{
	char adSoyad[30];
	char unvan[25];
	int meslekyili;
} hoca;

int main(int argc, char *argv[]) {
	
	//direct
	
	struct ogrenci ogren1;
	strcpy(ogren1.adi, "yagmur");
	strcpy(ogren1.bolumu, "yazilim muhendisligi");
	ogren1.numarasi=214365;
	ogren1.sinifi=2;
	
	printf("1. ogrenci bilgileri:\n adi:%s\n bolumu:%s\n sinifi:%d\n numarasi:%d\n", ogren1.adi, ogren1.bolumu, ogren1.sinifi, ogren1.numarasi);

	//undirect
	
	struct ogrenci *ogren2=(struct ogrenci *)malloc(sizeof(struct ogrenci));
	strcpy(ogren2->adi, "aleren");
	strcpy(ogren2->bolumu, "tip");
	ogren2->numarasi=678925;
	ogren2->sinifi=2;
	
	printf("2. ogrencinin bilgileri:\n adi:%s\n bolumu:%s\n sinifi:%d\n numarasi:%d\n",ogren2->adi, ogren2->bolumu, ogren2->sinifi, ogren2->numarasi);
	
	free(ogren2);
	
	//typeDef ile - direct
	
	hoca hoca1;
	strcpy(hoca1.adSoyad, "sinem kara");
	strcpy(hoca1.unvan, "docent");
	hoca1.meslekyili=13;
	
	//typeDef ile - undirect 
	
	hoca * hoca2= (hoca *)malloc(sizeof(hoca));
	strcpy(hoca2->adSoyad, "yucel alkan");
	strcpy(hoca2->unvan, "ogretim gorevlisi");
	hoca2->meslekyili=5;
	
	printf("1. akademik gorevli bilgileri:\n ad soyad: %s\n unvan:%s\n gorev yili: %d", hoca1.adSoyad, hoca1.unvan, hoca1.meslekyili);
	printf("\n2. akademik gorevli bilgileri:\n ad soyad:%s\n unvan:%s\n gorev yili: %d", hoca2->adSoyad, hoca2->unvan, hoca2->meslekyili);
	return 0;
}
