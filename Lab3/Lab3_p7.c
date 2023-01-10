#include<stdio.h>
void main(){
	int i , j , temp ; 
	
	printf("Give first variable i \n");
	scanf("%d",&i);
	printf("Give second variable j \n");
	scanf("%d",&j);
	
	printf("\n Before Swapping values are i = %d , j = %d ",i,j);
	
	temp = i ;
	i = j ;
	j = temp ;
	
	printf("\n After Swapping values are i = %d , j = %d ",i,j);
}
