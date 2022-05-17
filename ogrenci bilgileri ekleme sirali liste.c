#include<stdio.h>
#include<stdlib.h>


struct ogrenci{
	
	int number;
	int midterm;
	int final;
	char name[40];
};

int main(){
	
	int sayi=0, kisi,numara,i;
	float ort, skor;
	
	
	struct ogrenci *ptr;
	ptr=(struct ogrenci*)malloc(sizeof(struct ogrenci));
	
	
	
	float midterm1,final1;
	
	
	while(1){
		
	printf("Hangi islemi yapmak istiyorsunuz? 1-ekleme\t 2-listele\t 3-guncelle\t 4-sinif ortalamasi\t 5-en iyi not\nSecim = ");
	scanf("%d",&i);
	switch(i){
		
		
		case 1:
			sayi++;
			ptr=(struct ogrenci*)realloc(ptr, sayi*sizeof(struct ogrenci));
			
			printf("Ogrencinin adini giriniz = ");
			scanf("%s",(ptr+(sayi-1))->name);
	
			printf("final notu = ");
			scanf("%d",&(ptr+(sayi-1))->final);
			
			printf("vize notu = ");
			scanf("%d",&(ptr+(sayi-1))->midterm);
			
			printf("ogrencinin numarasi = ");
			scanf("%d",&(ptr+(sayi-1))->number);
			
			break;
			
		case 2:
			printf("adi\t numara\t vize\t final\t\n");
			for(i=0;i<sayi;i++){
				printf("%d%s\t %d\t %d\t %d\t\n",i+1,(ptr+i)->name,(ptr+i)->number,(ptr+i)->midterm,(ptr+i)->final);
				
			}
				
			break;
			
		case 3:
			
			printf("Ogrenci numarasini giriniz = ");
			scanf("%d",&numara);
			
			for(i=0; i<sayi; i++){
				
				if(numara == (ptr+i)->number){
					printf("Ogrencinin bilgilerini giriniz:");
					
					printf("Ogrenicinin adý = ");
					scanf("%s",(ptr+i)->name);
					
					printf("Ogrencinin numarasi = ");
					scanf("%d",&(ptr+i)->number);
					
					printf("Ogrencinin vizesi = ");
					scanf("%d",&(ptr+i)->midterm);
					
					printf("Ogrencinin finali = ");
					scanf("%d",&(ptr+i)->final);
					
				}
				
			}
			
			
		
			break;
		case 4:
			
			for(i=0; i<sayi; i++){
				ort+=(ptr+i)->midterm*0.4+(ptr+i)->final*0.6;
			}
			printf("ortalama = %f\n",ort/sayi);
			
			
			break;
		case 5:
		
		i=0;
		skor= (((ptr+i)->final*6/10)+((ptr+i)->midterm*4/10));
		
		
			for(i=0; i<sayi; i++){
				ort= (((ptr+i)->final*6/10)+((ptr+i)->midterm*4/10));
				
				
				if(ort>=skor){
					skor=ort;
					kisi=i;
				}
				
		}
			
			printf("\nEn yuksek not alan = %s\t%d\t%d\t%d\t\n",(ptr+kisi)->name,(ptr+kisi)->midterm,(ptr+kisi)->final,(ptr+kisi)->number);
						
			break;
	}
	
	}
	
}
