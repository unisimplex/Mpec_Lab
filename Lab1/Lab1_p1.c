 //WAP in C to calculate Simple interest.
#include<stdio.h>

void main(){
	int p,r,t,si;
	printf("Enter Principal , Rate of interest and Time \n");
	scanf("%d%d%d",&p,&r,&t);
	si = (p*r*t)/100;
	printf("Simple Interest = %d",si);
}
