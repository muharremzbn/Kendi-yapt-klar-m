#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

double hypotenuse(int horizontal, int vertical){
	
	double hypotenuse;
	hypotenuse=pow(horizontal,2)+pow(vertical,2);
	hypotenuse=sqrt(hypotenuse);
	return hypotenuse;
}

int main(){
	int h, v;
	printf("Enter two side lenght of triangle:");
	scanf("%d%d",&h,&v);
	while(1){
		printf("Hypotennus lenght : %f\n",hypotenuse(h,v));
		scanf("%d%d",&h,&v);
	}
}
