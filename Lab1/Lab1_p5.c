//Wap in c to Find the roots of a quadratic equation
#include<stdio.h>
#include<math.h>
void main(){
	float a,b ,c ;
	float root1,root2,denom;
	
	
	printf("Give Coefficient of Quadratic equation ");
	scanf("%f%f%f",&a,&b,&c);
	
	denom = 2*a ;
	float nume = sqrt(b*b-4*a*c);
	
	root1 = (-b+nume)/denom ;
	root2 = (+b+nume)/denom ; 
	
	printf("First root is %f",root1);
	printf("Second root is %f",root2);
	
}
