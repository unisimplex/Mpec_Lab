#include<stdio.h>
void main(){
	int num , rem , rev=0 , num_copy ;
	
	printf("Please enter the Number ");
	scanf("%d" , &num);
	num_copy = num;
	
	while(num!=0){
		rem = num%10;
		rev = rem + (rev*10);
		num = num/10;
	}
	
	if(rev == num_copy){
		printf("\n %d is a palindrome Number ",num_copy);
	}
	else{
		printf("\n %d is Not a palindrome Number ",num_copy);
	}
	
}
