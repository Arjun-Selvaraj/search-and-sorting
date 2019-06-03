#include<stdio.h>
void qsort(int a[],int left,int right)
{
	int i,j,pivot,temp;
	if(left<right)
	{
		pivot=left;
		i=left+1;
		j=right;
		while(i<j)
		{
			while(a[pivot]>=a[i])
				i=i+1;
			while(a[pivot]<a[j])
				j=j-1;
			if(a[i]>a[pivot]&&a[j]<a[pivot]&&i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		qsort(a,left,j-1);
		qsort(a,j+1,right);
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
	qsort(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
return 0;
}

