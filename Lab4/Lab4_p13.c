#include<stdio.h>
void main(){
	int n ;
	printf("Please enter the number : ");
	scanf("%d",&n);
	
	switch(n%2){
		case 0 :
			printf(" %d is Even ",n);
			break;
		case 1 :
			printf(" %d is Odd ",n);
			break;
		default:
			printf(" Invalid Input ! ");
			
	}
	
}
