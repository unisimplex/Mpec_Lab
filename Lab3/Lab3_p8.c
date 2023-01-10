#include<stdio.h>
void main(){
	int i , j  ; 
	
	printf("\n  Give first variable i : ");
	scanf("%d",&i);
	printf("\n  Give second variable j : ");
	scanf("%d",&j);
	
	printf("\n  Before Swapping values are i = %d , j = %d ",i,j);
	
	j = i + j ;
	i = j - i ;
	j = j - i ;
	
	printf("\n\n  After Swapping values are i = %d , j = %d ",i,j);
}
