//WAP in C to check whether the triangle is equilateral, isosceles, or scalene.
#include<stdio.h>

void main(){
	
	float a , b, c ;
	printf("Enter three sides of triangle");
	scanf("%f%f%f",&a,&b,&c);
	if(a==b && a==c)
		printf("The triangle is equilateral");
	else if(a==b|| b==c ||a==c)
		printf("The triangle is isosceles");
	else 
		printf("The triangle is scalene");
		
		
}

