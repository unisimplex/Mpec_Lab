//WAP in C to calculate the area of the triangle.
#include<stdio.h>
#include<math.h>
void main(){
	float a ,b,c ;
	
	printf("Enter the Value of sides of Triangle ");
	scanf("%f%f%f",&a,&b,&c);
	
	float s = (a+b+c)/2 ;
	float area = sqrt(s*(s-a)*(s-b)*(s-c));
	
	printf("\nThe area of triangle = %f",area);
}
