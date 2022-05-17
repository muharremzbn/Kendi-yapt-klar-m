#include<stdio.h>

char *gunismi(char *gundizisi[], int uzunluk, int hangigun){
	hangigun -=1;
	return gundizisi[hangigun%7];
	
	
}


int main(){
	
	char *gunler[7]= {"pazartesi", "sali", "carsamba", "persembe", "cuma", "cumartesi", "pazar"};
	int gun;
	
	printf("Haftanin kacinci gunu\n");
	scanf("%d",&gun);
	
	
	
	printf("Haftanin %s gunu.",gunismi(gunler,7,gun));
	
	return 0;

}
