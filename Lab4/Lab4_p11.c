#include<stdio.h>
void main(){
	int n ;
	printf("Please enter the Month number : ");
	scanf("%d",&n);
	
	switch(n){
		case 1 :
			printf(" January ");
			break;
		case 2 :
			printf(" Feburary ");
			break;
		case 3 :
			printf(" March ");
			break;
		case 4 :
			printf(" April ");
			break;
		case 5 :
			printf(" May ");
			break;
		case 6 :
			printf(" June ");
			break;
		case 7 :
			printf(" July ");
			break;
		case 8 :
			printf(" Agust ");
			break;
		case 9 :
			printf(" September ");
			break;
		case 10 :
			printf(" October ");
			break;
		case 11 :
			printf(" November ");
			break;
		case 12 :
			printf(" December ");
			break;
		
		default:
			printf(" Invalid Input ! ");
			
	}
	
}
