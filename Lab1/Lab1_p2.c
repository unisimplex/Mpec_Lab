//WAP in C to calculate the percentage of student marks for five subjects.
#include<stdio.h>

void main(){
	float s1,s2,s3,s4,s5,sum ;
	printf("Enter Marks of each subject \n");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	sum = (s1+s2+s3+s4+s5);
	float percentage = (sum/500)*100;
	printf("Percentage of these five subjects is : %f",percentage);
}
