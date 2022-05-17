#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

int main(){
	
	int sayi,i,j;
	printf("kenarda olacak yildiz sayisini giriniz:");
	scanf("%d",&sayi);
	for(i=0;i<sayi;i++){
		for(j=0;j<sayi;j++)
			printf("*");
	printf("\n");
	}
	return 0;
}
