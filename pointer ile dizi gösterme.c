#include<stdio.h>

int main(){
	
	int arr[10] = {45,41,642,6554,66,545,4646,7645,586,469};
	int *p;
	int i=0;
	
	p=arr;
	
	for(; i<=9; i++){
		printf(" \n dizinin %d. degeri = %d",i+1 ,*(p+i));
	}
	
	return 0;
}
