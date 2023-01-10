#include<stdio.h>
void main(){
	float m,h,v ; 
	printf("Enter mass , height and acceleration\n");
	scanf("%f%f%f",&m,&h,&v);
	float g = 9.8;
	
	float energy = (m*g*v) + (m*v*v)/2 ; 
	printf("Energy is %f",energy);
}
