#include<stdio.h>
void main(){
 int rem , sum , i,num;
 
 printf("Please enter the number ");
 scanf("%d",&num);
 
 while (num!=0)
 {
	rem = num%10;
	sum = sum + rem;
	num = num/10; 
 
 }
 printf("%d",sum);
 
	
		
}
