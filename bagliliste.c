#include <stdio.h>
#include <stdlib.h>

/* tek yonlu dogrusal baglı listeler veri girisi*/

struct dugum{
	
	int veri;
	struct dugum * gosterici;
	
};

int main(int argc, char *argv[]) {
	
	struct dugum * bir;
	bir= (struct dugum *)malloc(sizeof(struct dugum));
	
	struct dugum * iki;
	iki= (struct dugum *)malloc(sizeof(struct dugum));
	
	struct dugum * uc;
	uc= (struct dugum *)malloc(sizeof(struct dugum));
	
	struct dugum * dort;
	dort= (struct dugum *)malloc(sizeof(struct dugum));
	
	bir->veri=10;
	bir->gosterici=iki;
	
	iki->veri=20;
	iki->gosterici=uc;
	
	uc->veri=30;
	uc->gosterici=dort;
	
	dort->veri=40;
	dort->gosterici=NULL;
	
	printf("%d - %d - %d - %d", bir->veri, iki->veri, uc->veri, dort->veri);
	
	
	return 0;
}
