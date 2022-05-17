#include <stdio.h>

long faktoriyel(long);

int main(){
	
	int i;
	for(i=1; i<=10; i++)
	printf("%d! = %ld\n", i, faktoriyel(i));
	return 0;
	
}

long faktoriyel(long int x){
	
	
	if(x==1)
	return 1;
	else
	x=x*faktoriyel(x-1);
	
	return x;
}
