#include<stdio.h>
void main(){
	int fact=1 ,i, num ; 
	
	printf("Please enter the Number ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		fact = fact * i ;
	}
	
	printf(" factorial of this number is %d",fact);
}
