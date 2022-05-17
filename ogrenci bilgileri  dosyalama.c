#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int select;
	FILE *myPtr;
	int grade, id;
	char name[20];
	
	printf("Please select a process:\n1)create a file\n2)read the file\n3)add data\n-1)exit\n");
	scanf("%d",&select);
	while(select!=-1){
		switch(select){
			case 1:
				printf("Are you sure!\nif file exist all information will be delete.\n1-yes\n2-no");
				scanf("%d",&select);
	
				if(select==1){
					if((myPtr=fopen("info.txt","w"))==NULL)
					printf("File could not be opened");
	
					else{
						printf("Student ID\tStudent name\tMidterm grade\n(ctrl+z for exit)\n");
						scanf("%d%s%d",&id,name,&grade);
					
						while(!feof(stdin)){
							fprintf(myPtr,"%d\t%s\t%d\n",id,name,grade);
							scanf("%d%s%d",&id,name,&grade);
						}
						fclose(myPtr);
					}
				printf("\n?");
				}
				
				break;
			case 2:
				if((myPtr=fopen("info.txt","r"))==NULL)
					printf("File could not be opened!\n");
	
				else{
					
					printf("Student ID\tStudent name\tMidterm grade\n");
					
					fscanf(myPtr,"%d%s%d",&id,name,&grade);
				
					while(!feof(myPtr)){
						
						printf("%d\t%s\t%d\n",id,name,grade);
						fscanf(myPtr,"%d%s%d",&id,name,&grade);
					
					}
					printf("?");
					rewind(myPtr);
					fclose(myPtr);
				}
				break;
	
			case 3:
				if((myPtr=fopen("info.txt","a"))==NULL)
					printf("File could not be opened!\n");
				else{
					printf("information to be added\nStudent ID\tStudent name\tMidterm grade\n");
					scanf("%d%s%d",&id,name,&grade);
					
					while(!feof(stdin)){
							fprintf(myPtr,"%d\t%s\t%d\n",id,name,grade);
							scanf("%d%s%d",&id,name,&grade);
						}
					printf("?");
					fclose(myPtr);
				}
				break;
			
		}
		scanf("%d",&select);
	}

	
}
