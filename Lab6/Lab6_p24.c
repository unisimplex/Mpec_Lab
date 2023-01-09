#include<stdio.h>
#include<math.h>


void main(){
 int num , i , sum=0 ,j;
 printf("Enter maximum value of series of number : ")	;
 scanf("%d",&num);
 
 for(i=1 ; i<=num ; i++){
 	j = pow(i,2);
 	sum = sum + j;
	}
		
	printf("\n 1^2 + 2^2 + 3^2 + ...... %d^2 is %d " ,num , sum );
		
	
}
