//WAP in C to check a number is divisible by 3 and 7
#include<stdio.h>

void main(){
	int n	;
	printf("\nEnter any integer number ");
	scanf("%d",&n);
	
	if(n%3==0){
		
		if(n%7==0){
		printf("Number is divisible by both 3 and 7 \n");}
		else{
		printf("Number is divisible by 3 only \n");}	
		
		}
		
	else{
		
		if(n%7==0){
		printf("Number is divisible by 7 only \n");}
		else{
		printf("Number is Not divisible by both 3 and 7 \n");}	
		
		}
		
}

