#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a,b;
int main(){
	
	srand(time(NULL));
	
	
	a=1+rand()%6;
	b=1+rand()%6;
	
	int c;
	c=a+b;
	
	if(c==7 || c==11){
		printf("you win!!");
		printf("\n %d",c);
	}
		
	else if(c==2 || c==3 || c==12){
		printf("You lost!!");
		printf("\n %d",c);
	}
	
	else{
	
		int d,s;
		
		
		while(d=1){
		
			a=1+rand()%6;
			b=1+rand()%6;
			s=a+b;
			
			if(s==c){
				printf("you win!!");
				printf("\n %d 2. el",s);
				d=0;
				break;
			}
			else if(s==7){
				printf("you lost!!");
				printf("\n %d 2. el",s);
				d=0;
				break;
			}
		}
		
	}	
	getch();
	return 0;
}
