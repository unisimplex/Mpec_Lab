#include<stdio.h>
#include<math.h>
void main(){
 int num , bin=0 , i=0 , rem ,n;
 
 printf("Please enter an decimal integer ");
 scanf("%d",&num);
 n=num;
 while(num!=0){
 rem = num%2 ; 
 bin = bin + rem * (pow(10,i));
 num = num/2 ;	
 i++;
 
 }

printf("The binary number of %d is %d",n,bin);

}
