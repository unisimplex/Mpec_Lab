#include<stdio.h>
#include<math.h>
 void main(){
 	int  i , x , n , term=0 , p=1,  sum=0;
 	
 	printf(" Enter the value of x: ");
 	scanf("%d",&x);
 	printf(" Enter the the value of n: ");
 	scanf("%d",&n);
 	
 	for(i=1 ; i<=n; i++){
 		term = pow(x,p);
 		sum = sum + term ;
 		p = p + 2 ; } 
		 		
 		printf(" \n The sum of series x + x^3 + x^5 + x^7 ... nth term \n\n Where x = %d and n = %d is %d", x , n , sum );
 	
 }
