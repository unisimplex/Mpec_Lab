#include<stdio.h>

void main(){
	int i , j  ;
	for(i=1;i<6;i++){
		for(j=i;j<5;j++){
		printf(" ");
		}
		for(j=i;j>0;j--){
			printf("*");
		}
		printf("\n");
	}
}
