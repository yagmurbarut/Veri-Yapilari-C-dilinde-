#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* bu örnekte union mantığı ele alınmıştır. Union veri yapısında hafızada max yer kaplayanın kapladığı yere göre ortak kullanım vardır.
Bu yüzden öğrenci ismi yazdırıldıktan sonra no yazdırılırsa ve tekrar isim yazdırılmak istenirse yeni alanı "no" tuttuğu için ismi yazdıramayız */

union ogrenci{
	
	char isim[30];
	int no;
	float ort;
};

typedef union{
	 char adsoyad[50];
	 char alan[30];
	
} ogretmen;
	
int main(){
	
	union ogrenci ogr;
	ogretmen ogrt;
	strcpy(ogr.isim,"yagmur");
	printf("ogrenci isim: %s\n",ogr.isim);
	ogr.no=234;
	printf("ogrenci no: %d\n", ogr.no);
	printf("ogrenci isim: %s\n",ogr.isim);
	strcpy(ogrt.adsoyad,"ezgi kara");
	printf("ogretmen ad soyad: %s\n", ogrt.adsoyad);
	printf("ogrenci no: %d\n", ogr.no);
	strcpy(ogrt.alan,"fizik\n");
	printf("ogretmen alani: %s",ogrt.alan);
	ogr.ort=98.75;
	printf("ogrenci ort: %.2f\n",ogr.ort);
	printf("ogrenci no: %d\n", ogr.no);


	
 return 0;
}
