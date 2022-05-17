#include<stdio.h>

struct bilgi{
	
	char name[40];
	char surname[40];
	int number;
	int midtermGrade;
};

int main(){
	struct bilgi ogrenci[3];
	int i=0;
	
	for (i=0;i<3;i++){
		
		printf("Ogrencinin ismini girin = ");
		scanf("%s", ogrenci[i].name);
	
		printf("Ogrencinin soyadini girin = ");
		scanf("%s", ogrenci[i].surname);
	
	
		printf("Ogrenci numarasini girin = ");
		scanf("%d", &ogrenci[i].number);
		
		printf("Ogrenci notunu girin = ");
		scanf("%d", &ogrenci[i].midtermGrade);
		
	}
	
	for(i=0;i<3; i++){
		printf("\n");
	
		printf("\t%s", ogrenci[i].name);
		printf("\t%s", ogrenci[i].surname);
	
		printf("\t%d", ogrenci[i].number);
		printf("\t%d", ogrenci[i].midtermGrade);
		
	}
	
	return 0;
	
}
