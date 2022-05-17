#include<stdio.h>
#include<time.h>


int main(){
	
	
	int a[]={1,2,3,4,5,6,8,7,9};
	
	printf("Sayilarin toplami = %d",hesap(a,8) );
	
	return 0;
}

int hesap(int arr[],int n){
	if(n==0){
		return 1;
	}
	return arr[n] + hesap(arr,n-1);
}

