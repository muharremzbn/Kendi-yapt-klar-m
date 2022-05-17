#include<stdio.h>

int main(){
	
	int k,l;
	printf("Bir k sayisi giriniz \n");
	scanf("%d",&k);
	printf("Bir l sayisi giriniz \n");
	scanf("%d",&l);
	

	
	printf("Girilen sayilarin en buyuk ortak boleni = %d",sonuc(k,l));
	
	return 0;
	
}

int sonuc(int k, int l){
	
	static int i=1, ebob;
	
	if( i==k || i==l) {
		
		return ebob;
		
	}
	else{
		if(k%i==0 && l%i==0)
			ebob = i;
		i++;
		sonuc(k,l);
	}
	
	
}
