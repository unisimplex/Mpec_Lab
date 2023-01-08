#include<stdio.h>
void main(){
	int sum=0 , num , rem , num_copy ; 
	
	printf("Please enter the number ");
	scanf("%d",&num);
	num_copy = num ;
	
	while( num!= 0){
		rem = num%10;
		sum = sum + (rem*rem*rem) ; 
		num = num/10; 
	}
	
	if(sum == num_copy){
		printf("%d is a Armstrong Number ",num_copy);
	}
	else{
		printf(" %d is Not an Armstrong Number ",num_copy);
	}
	
}
