#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct kitap{
	
	char kitapadi[30];
	float fiyat;
	int sayfa;
};


int main(int argc, char *argv[]) {
	
	//direkt
	struct kitap kitap1;
	strcpy(kitap1.kitapadi, "Suc ve Ceza");
	kitap1.fiyat=120.95;
	kitap1.sayfa=300;
	
	printf("kitap bilgileri:\nadi: %s,fiyati: %f, sayfa sayisi: %d\n" ,kitap1.kitapadi, kitap1.fiyat, kitap1.sayfa);
	
	//undirect
	struct kitap *kitap2=(struct kitap *)malloc(sizeof(struct kitap));
	strcpy(kitap2->kitapadi, "Turklerin Tarihi");
	kitap2->fiyat=135.75;
	kitap2->sayfa=280;
	
	printf("kitap2 bilgileri:\nadi: %s,fiyati: %f,sayfa sayisi: %d", kitap2->kitapadi , kitap2->fiyat, kitap2->sayfa);
	
	return 0;
}
