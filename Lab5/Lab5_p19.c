#include<stdio.h>
void main(){
 int i, num , flag=0 ;
  
 printf("Please enter the number ");
 scanf("%d",&num);

 for(i=2 ; i < (num/2) ; i++){
	if(num%i == 0){
		flag = 1;
		}
	}

 if (flag == 0){
	printf("%d is Prime Number ",num);
	}
 else{
	printf("%d is Not a Prime Number ",num);
	}
}
