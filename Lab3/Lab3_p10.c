#include<stdio.h>
void main(){
	int a  ; 
	
	printf("Give a number  \n\t");
	scanf("%d",&a);
	
	if(a>0)
		printf("\n %d is a positive number ",a);
	else if(a<0)
		printf("\n %d is a negative number ",a);
	else
		printf("\n Number is zero  ",a);

	
}

