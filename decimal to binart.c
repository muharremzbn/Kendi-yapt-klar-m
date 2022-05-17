#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int number,i=0;
	int *arr;
	
	arr=(int)malloc(sizeof(int));
		
	printf("ogrenci numaranizi giriniz = ");
	scanf("%d",&number);
	
	while(number!=0){
		
		*(arr+i)=number%2;
		
		arr=(int*)realloc(arr,(i+1)*sizeof(int));
		
		number=(number-(number%2))/2;
		i++;
		
		
	}
	
	for(;i>=0;i--)
		printf("%d",*(arr+i));
		
	return 0;
	
}
