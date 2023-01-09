#include<stdio.h>
 void main(){
 	float  i , n , sum=0;
 	printf(" Enter the number of terms  ");
 	scanf("%f",&n);
 	
 	for(i=1;i<=n;i++){ 		
 		sum = sum + (1/(i*i)) ;
	 }
 	
 	printf(" The sum of series is %f" , sum);
 	
 }
