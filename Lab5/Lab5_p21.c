#include<stdio.h>
void main(){
	int rev=0 , num , rem ; 
	
	printf("Please enter the number ");
	scanf("%d",&num);
	
	while( num!= 0){
		rem = num%10;
		rev = rem + (rev*10) ; 
		num = num/10; 
	}
	
	printf(" The reversed number is %d",rev);
	

}
