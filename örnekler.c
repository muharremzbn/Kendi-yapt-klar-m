#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
	int park[2],i,sum2=0;
	float arr[2],sum1=0;

	for(i=0;i<3;i++){
		printf("\nEnter the parking hours:");
		scanf("%d",&park[i]);
		
		if(park[i]<=3){
			arr[i]=2.00;
		}
		else{
			arr[i]=(park[i]-3)*0.5;
			arr[i]+=2.0;
		}
	}
	printf("\nCar\tHours\tCharge\n");
	
	for(i=0;i<3;i++){
	printf("%d\t%d\t%.2f\n",i,park[i],arr[i]);	
	}
	for(i=0;i<=3;i++){
		sum1=sum1+arr[i];
		sum2=sum2+park[i];
	}
	printf("total\t%d\t%.2f\n",sum2,sum1);
}
