#include<stdio.h>
void main(){
	char ch ;
	float n1 , n2 ;
	printf("  \nEnter an Operator (+ , - , * , / ) :  ");
	scanf("%c",&ch);
	
	printf("  \nEnter the first operand  :  ");
	scanf(" %f",&n1);
	printf("  \nEnter the second operand :  ");
	scanf(" %f",&n2);
	
	
	switch(ch){
		case '+' :
			printf("\n %.2f %c %.2f = %.2f ",n1,ch,n2,n1+n2); break;
		case '-' :
			printf("\n %.2f %c %.2f = %.2f",n1,ch,n2,n1-n2); break;
		case '*' :
			printf("\n %.2f %c %.2f = %.2f",n1,ch,n2,n1*n2); break;
		case '/' :
			printf("\n %.2f %c %.2f = %.2f",n1,ch,n2,n1/n2); break;
				
		default:
			printf(" %c is not an operator ",ch);
			
	}
	
}
