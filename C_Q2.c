#include<stdio.h>
#include<stdlib.h>

int marks(int a, int b, int c, int *t, int *p)
{
	*t=a+b+c;
	*p=(*t*100)/300; 
}

int main()
{
	int a,b,c,total,percentage;
	printf("Enter marks of subject 1");
	scanf("%d",&a);
	printf("Enter marks of subject 2");
	scanf("%d",&b);
	printf("Enter marks of subject 3");
	scanf("%d",&c);
	marks(a,b,c,&total,&percentage);
	printf("Total is: %d marks\n",total);
	printf("Percentage: %d% \n",percentage);
}	