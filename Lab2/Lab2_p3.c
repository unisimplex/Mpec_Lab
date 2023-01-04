//WAP in C to find the greatest number among three numbers using nested if else.
#include<stdio.h>

void main(){
	
	int a,b,c	;
	printf("\nEnter any Three integer number ");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b){
		if(a>c){
			printf("%d is greatest",a);}
		else{
			printf("%d is greatest",c);}
		}
		else{
			if(b>c){
				printf("%d is greatest",b);}
			else{
				printf("%d is greatest",c);}
		}
		
}

