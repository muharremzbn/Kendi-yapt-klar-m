#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

int main(){
	
	int y;
	srand(time(NULL));
	while(1){
	y=rand()%10+1;
	if(y%2==1)
	printf("%d",y*2);
	getch();
	}
	
	
}
