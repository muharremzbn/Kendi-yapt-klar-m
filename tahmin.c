#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

int main(){
	int sayi, temp, deger=1;
	srand(time(NULL));
	sayi = rand();
	printf("bir tahmin girin!");
	scanf("%d",&temp);
	while(deger!=0){
		if(temp>sayi){
			printf("Too high. Try again.\n");
		}
		else if(temp<sayi)
			printf("Too low. Try again.\n");
		else{
			printf("excelent! you guessed the number!\nWould you like to play again(1-yes 0-no)?");
			scanf("%d",&deger);
		}
		scanf("%d",&temp);
	}
}
