#include<stdio.h>

int main(){
	
	int s=0;
	char str[]={"muharrem"};
	char *ptr;
	
	ptr=str;
	
	while(str[s]!='\0')
	s++;
	
	for(;s>=0;s--){
		printf("%c",ptr[s]);
	}
	
	return 0;
}
