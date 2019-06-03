//linear search
#include<stdio.h>
#include<conio.h>
int main()
{
	int l,i,k;
	printf("\n enter the array limit:");
	scanf("%d",&l);
	int a[l];
	printf("enter the array elemnts :");
	for(i=0;i<l;i++)
	scanf("%d",&a[i]);
	printf("\nEnter the key element :");
	scanf("%d",&k);
	for(i=0;i<l;i++)
	{
		if(a[i]==k)
		{
		printf("element found");
		break;
	}
	}
	if(i==l)
	printf("element not found");
	return 0;
}
