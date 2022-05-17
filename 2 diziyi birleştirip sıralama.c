#include<stdio.h>
#include<stdlib.h>

int siralama(int arr1[],int x,int arr2[],int y){
	int i,j,a,k;
	i=0;
	j=0;
	a=0;
	k=x+y;
	int *arr;
	
	while(i<5){
		if(*(arr1+i)<*(arr2+j)){
			*(arr+a)=*(arr1+i);
			i++;
			a++;
		}
		else{
			*(arr+a)=*(arr2+j);
			j++;
			a++;
		}
	}
	while(j<7){
		*(arr+a)=*(arr2+j);
			j++;
			a++;
	}
	return arr;
}


int main(){
	
	int arr1[5]={1,5,9,11,15};
	int arr2[7]={2,4,6,8,16,18,45};
	
	int *arr3;
	
	arr3=siralama(arr1,5,arr2,7);
	int x=0;
	for(; x<12; x++){
		printf("%d\n",*(arr3+x));
	}
	
	return 0;
}


