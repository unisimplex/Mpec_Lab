//WAP in C to calculate division according to percentage
#include<stdio.h>

void main(){
	
	int marks	;
	printf("\nEnter any Marks ");
	scanf("%d",&marks);
	
	if(marks>85 && marks <=100)
		printf("Congrats ! you scored grade A ");
	else if(marks>60 && marks<=85)
		printf("You Scored grade B+ ");
	else if(marks>40 && marks<=60)
		printf("You Scored grade B ");
	else if(marks>30 && marks<=45)
		printf("You Scored grade C ");
	else
		printf("Sorry You are Fail ");
		
		
}

