//insertion sort
#include<stdio.h>
#include<conio.h>
int main()
{
	int l,i,j,t,c;
	printf("\nEnter the limit:");
	scanf("%d",&l);
	int a[l];
	printf("\n Enter the values :");
	for(i=0;i<l;i++)
	scanf("%d",&a[i]);
	for(i=1;i<l;i++)
	for(j=0;j<i;j++)
	{
		if(a[i]<a[j])
		{
			t=a[i];
			for(c=i;c>=j;c--)
			a[c]=a[c+1];
			a[j]=t;
		}
	}
	for(i=0;i<l;i++)
	printf("\n%d",a[i]);
	getch();
	return 0;
}
