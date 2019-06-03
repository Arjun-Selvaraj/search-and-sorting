//binary search
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,t,l=0,h,m,s,k;
	printf("\n Enter the array size :");
	scanf("%d",&s);
	int a[s];
	printf("\n Enter the array elements :");
	for(i=0;i<s;i++)
	scanf("%d",&a[i]);
	printf("\n Enter the key element :");
	scanf("%d",&k);
	for(i=0;i<s-1;i++)
    for(j=0;j<=(s-2)-i;j++)
    {
    if(a[j]>a[j+1])
    {
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
     }
    }
	printf("sorted array:\n");
	for(i=0;i<s;i++)
	printf("\n%d",a[i]);
	h=s-1;
	while(l<=h)
	{
		m=(l+h)/2;
		if(a[m]==k)
		{
		printf("\n The element is present in %d position",m+1);
		break;
	}
		else if(a[m]<k)
		l=l+1;
		else
		h=h-1;
	}
	if(l>h)
	printf("element not found");
	return 0;
}
