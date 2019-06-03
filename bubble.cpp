//bubble sort
#include<stdio.h>
#include<conio.h>
int main()
{
	int l,i,j,t;
	printf("\nEnter the limit:");
	scanf("%d",&l);
	int a[l];
	printf("\n Enter the values :");
	for(i=0;i<l;i++)
	scanf("%d",&a[i]);
	for(i=0;i<l-1;i++)
	for(j=0;j<=(l-2)-i;j++)
	{
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
	for(i=0;i<l;i++)
	printf("\n%d",a[i]);
	getch();
	return 0;
}
