#include <stdio.h>
 int main()
{
   int c, first, last, middle, n, search, array[100],i,j,t;
   printf("Enter number of elements\n");
   scanf("%d",&n);
   printf("Enter %d integers\n", n);  //to be in sorted order or call insertion sort 
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
   printf("Enter value to find\n");
   scanf("%d",&search);
   	for(i=0;i<n-1;i++)
	for(j=0;j<=(n-2)-i;j++)
	{
		if(array[j]>array[j+1])
		{
			t=array[j];
			array[j]=array[j+1];
			array[j+1]=t;
		}
	}
	for(i=0;i<n;i++)
	printf("\n%d",array[i]);
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
   while (first <= last) 
     {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) 
	{
         printf("\n%d found at location %d.\n", search, middle+1);
         break;
      	}
      else
         last = middle - 1;
      middle = (first + last)/2;
     }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);
return 0;
}

