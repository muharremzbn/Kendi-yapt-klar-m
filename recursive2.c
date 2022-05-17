#include<stdio.h>

int main(){
	
	int a[]={15,16,48,45,32,87,56,48};
	
	printf("Dizideki en buyuk sayi = %d",deger(a,7));
	
	return 0;
	
	
}

int deger(int arr[], int i){
	
	
	if(i==0)
		return 15;
	
	
	else if( arr[i] >= deger(arr,i-1) ){
		
		return arr[i];
	}
	else{
		i--;
	
	}
}
