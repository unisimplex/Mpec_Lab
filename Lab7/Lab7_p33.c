#include<stdio.h>

void main(){
	int i , j , prn=1 ;
	for(i=1;i<5;i++){
		for(j=i;j>0;j--){
			printf("%d",prn);
			prn++;
		}
		printf("\n");
	}
}
