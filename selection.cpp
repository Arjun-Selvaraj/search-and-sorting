//selection sort
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
	for(i=0;i<l;i++)
	for(j=i+1;j<l;j++)
	{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	for(i=0;i<l;i++)
	printf("\n%d",a[i]);
	getch();
	return 0;
}
