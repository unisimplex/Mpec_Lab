#include<stdio.h>
void main(){
 int i, fib=0 , n1=0, n2=1 ;
 
 printf(" %d %d",n1,n2);
 
 for(i=2; i<10;i++){
 	fib = n1 + n2 ;
	printf(" %d",fib);
 	n1 = n2 ; 
 	n2 = fib ;}

}
