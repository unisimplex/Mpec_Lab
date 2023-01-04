//WAP in C to check a number is odd or even.
#include<stdio.h>

void main(){
	int a	;
	printf("\nEnter any integer number ");
	scanf("%d",&a);
	
	if(a%2==0){
		printf("Given number is Even \n");
	}
	else{
		printf("Given number is Odd \n");
	}
}
