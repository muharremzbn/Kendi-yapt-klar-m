#include<stdio.h>

int main(){
	
	int i, j, a, i2, j2;
	
	printf("kare matrixin degerlerini giriniz = ");
	scanf("%d",&i);
	j=i;
	
	int arr[i][j];
	
	
	for(i2=0; i2<i;i2++){
		printf("%3d satirini doldurunuz. \n",i2+1);
		for(j2=0; j2<j; j2++){
		
		
			scanf("%d",&a);
			arr[i2][j2] = a;
			
		
		}
	}
	for(i2=0; i2<i; i2++){
			printf("\n");
		
			for(j2=0; j2<j;j2++){
				printf("%3d",arr[i2][j2]);
			}
	}

}
