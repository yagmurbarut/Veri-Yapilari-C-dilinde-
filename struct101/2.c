#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ogrenci{
	
	char adi[30];
	int sinifi;
	char bolumu[50];
	int numarasi;
};

int main(int argc, char *argv[]) {
	
	//direct
	
	struct ogrenci ogren1;
	strcpy(ogren1.adi, "yagmur");
	strcpy(ogren1.bolumu, "yazilim muhendisligi");
	ogren1.numarasi=214365;
	ogren1.sinifi=2;
	
	printf("ogrenci bilgileri:\n adi:%s\n bolumu:%s\n sinifi:%d\n numarasi:%d\n", ogren1.adi, ogren1.bolumu, ogren1.sinifi, ogren1.numarasi);

	//undirect
	
	struct ogrenci *ogren2=(struct ogrenci *)malloc(sizeof(struct ogrenci));
	strcpy(ogren2->adi, "aleren");
	strcpy(ogren2->bolumu, "tip");
	ogren2->numarasi=678925;
	ogren2->sinifi=2;
	
	printf("2. ogrencinin bilgileri:\n adi:%s\n bolumu:%s\n sinifi:%d\n numarasi:%d",ogren2->adi, ogren2->bolumu, ogren2->sinifi, ogren2->numarasi);
	
	free(ogren2);
	return 0;
}
