#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

int kat(int a, int b){
	if(b%a==0){
		return 1;
	}
	else
	return 0;
}

int main(){
	
	int sayi1, sayi2, deger;
	printf("2 sayi girin:\n");
	scanf("%d%d",&sayi1,&sayi2);
	while(1){
		deger=kat(sayi1,sayi2);
		if(deger==1)
		printf("%d sayisi %d sayisinin katlarindandir\n",sayi2,sayi1);
		else
		printf("%d sayisi %d sayisinin kati degildir\n",sayi2,sayi1);
		scanf("%d%d",&sayi1,&sayi2);
	}
	
	return 0;
}
