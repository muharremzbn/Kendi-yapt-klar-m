#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int sirala(int arr[],int uzunluk){
	
	int j, i;
	
	for(i=0; i<uzunluk; i++){
		
		for(j=i+1; j<uzunluk; j++){
		
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
				
				
			}
		}
		
	}
	
	return *arr;
	
}

int main(){
	int i, arr[]={5,3,8,4,5,9};
	int uzunluk=6;
	sirala(arr,uzunluk);
	
	for(i=0;i<uzunluk;i++){
		printf("%d",arr[i]);
	}
	
}
