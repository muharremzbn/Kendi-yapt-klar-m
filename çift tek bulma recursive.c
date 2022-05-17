#include <stdio.h>

int bul(int arr[], int n){
	
//arr[n]=0+arr[n-1]  arr[0]=1
	if(n==0)
	arr[0]=1;
	
	else{
		if(arr[n]%2==1){
			return (1+bul(arr,n-1));
		}
		else
			return bul(arr,n-1);
		}
	return arr[n];

}

int main(){
	int	arr[]= {1,2,3,4,5,6,7,8,9};
	
	printf("%d tane tek",bul(arr,8));

	return 0;
}
