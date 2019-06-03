#include<conio.h>
#include<stdio.h>
void shel(int a[],int n)
{
	int i,j,k,temp;
	for(k=n/2;k>0;k=k/2)
	{
		for(i=k;i<n;i++)
		{
			temp=a[i];
			for(j=i;j>=k;j=j-k)
			{
				if(a[j-k]>temp)
					a[j]=a[j-k];
				else
					break;
			}
			a[j]=temp;
		}
	}
}
int main()
{
	int a[10],i,n;
	printf("Enter no. of elements:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	shel(a,n);
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	   return 0;
		getch();
}

