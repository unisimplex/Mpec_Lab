#include<stdio.h>
#include<math.h>


void main(){
 int i , count=0;
	
	for(i=1800; i <= 2050; i++){
		if( i%400==0 || i%100!=0 && i%4==0 ){
			printf(" %d",i);
			count++ ; 
		}
	}
	printf("\n Total number of leap years between 1800 & 2050 is %d",count);
	scanf("%d");
}
