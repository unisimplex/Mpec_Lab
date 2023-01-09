#include<stdio.h>
 void main(){
 	float fact=1 , i , sum=0 , term=0;
 	
 	for(i=1;i<=7;i++){
 		fact = fact * i;
 		
 		term = i/fact ; 
 		
 		sum = sum + term ;
	 }
 	
 	printf(" The sum of first seven terms of series 1/1! + 2/2! + 3/3! + 4/4! .... is %f" , sum);
 	
 }
