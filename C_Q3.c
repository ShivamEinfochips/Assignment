#include<stdio.h>
int main()
{
	int ele,found=0,a[10];
	for(int i=0;i<10;i++)
	{
		scanf("Enter the element %d",&a[i]);
	}	
	printf("Enter the element to be searched in array: ");
	scanf("%d",&ele);
	for(int i=0;i<10;i++)
	{
		if(a[i]==ele)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	for(int i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
}