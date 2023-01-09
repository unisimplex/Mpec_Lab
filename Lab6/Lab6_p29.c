#include<stdio.h>
#include<math.h>
 void main(){
 	int i ;
 	float x ,sum=0 , f = 1 , n , a=2 ;
 	printf(" Enter the number of terms  ");
 	scanf("%f",&n);
 	printf(" Enter the value of x  ");
 	scanf("%f",&x);
 	
 	sum = x ;
 	
 	for(i=2;i<=((n-1)*2);i++){
	f = f * i ;
	if (i%2!=0)
		continue;
		sum = sum + (pow(x,a)/f);
		a = a + 2 ; 
	 }
 	
 	printf("\n The sum of first n terms of series x + x^2/2! + x^4/4! + x^6/6! \n\n where n is %f and x is %f is %f" ,n,x, sum);
 	
 }
