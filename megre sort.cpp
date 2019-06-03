//merge sort
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,t,l1,l2,l3;
	printf("\nEnter the limit:");
	scanf("%d",&l1);
	int a[l1];
	printf("\nEnter the elements :");
	for(i=0;i<l1;i++)
	scanf("%d",&a[i]);
	for(i=0;i<l1;i++)
	for(j=0;j<l1-1;j++)
	{
		if(a[i]<a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	printf("\n The sorted list is :");
	for(i=0;i<l1;i++)
	printf("\t%d",a[i]);
	printf("\nEnter the limit:");
	scanf("%d",&l2);
	int b[l2];
	printf("\nEnter the elements :");
	for(i=0;i<l2;i++)
	scanf("%d",&b[i]);
	for(i=0;i<l2;i++)
	for(j=0;j<l2-1;j++)
	{
		if(b[i]<b[j])
		{
			t=b[i];
			b[i]=b[j];
			b[j]=t;
		}
	}
	printf("\n The sorted list is :");
	for(i=0;i<l2;i++)
	printf("\t%d",b[i]);
    int c[l1+l2];
	for(i=0,j=0,k=0;k<l1+l2;)
	{
		if(a[i]<b[j])
		c[k++]=a[i++];
		else
		c[k++]=b[j++];
	}
	printf("\n The merged sorted list is :");
	for(i=0;i<k;i++)
	printf("\t%d",c[i]);
	return 0;
}
