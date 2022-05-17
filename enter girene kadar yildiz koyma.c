#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i=0, k;
	char giris[50];
	char *p;
	
	p=giris;
	
	while(1){
		
		*(p+i)=getch();
		if(*(p+i)==13)
			break;
		putchar('*');
		printf("Adres[%d] = %d\n",i,p+i);
		i++;
		
	}
	printf("\n");
	
	
	for(k=0;k<i;k++){
		printf("Adres[%d] = %d\n",k,p+k);
		putchar(*(p+k));
		
	}
	getch();
	return 0;
	
}



