#include<stdio.h>
void main(){
	int a , b , c ; 
	
	printf("Give first number a \n\t");
	scanf("%d",&a);
	printf("Give second Number b \n\t");
	scanf("%d",&b);
	printf("Give third Number c \n\t");
	scanf("%d",&c);
	
	
	int max = (a>b) ? (a>c ? a:c):( b>c ? b:c );
	
	printf("\n %d is the Greatest among these numbers",max);
}
