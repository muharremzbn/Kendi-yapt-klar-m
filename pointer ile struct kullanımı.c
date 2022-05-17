#include<stdio.h>

struct person{
	int age;
	char name[10];
};

int main(){
	
	struct person *ptr;
	int i, n;
	
	printf("Enter the number of person = ");
	scanf("%d",&n);
	
	ptr= (struct person*) malloc(n * sizeof(struct person));
	for (i=0; i<n; i++){
		
		printf("enter first name and age respectively: ");
		scanf("%s %d",(ptr+i)->name, &(ptr+i)->age);
		
	}
	
	printf("displaying information \n");
	
	for(i=0; i<n; i++){
		printf("Name: %s\t Age: %d\n",(ptr+i)->name,(ptr+i)->age);
	}
	
	return 0;
}

