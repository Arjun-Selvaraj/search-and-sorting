#include <stdio.h>
int main()
{
   int i, n, search, array[100];
   printf("Enter number of elements\n");
   scanf("%d",&n);
   printf("Enter %d integers\n", n);   
   for (i = 0; i < n; i++)
      scanf("%d",&array[i]);
   printf("Enter value to find\n");
   scanf("%d", &search);
   for (i = 0; i < n; i++)
{
	if(array[i]==search)
	{
		printf("%d found at location %d.\n", search, i+1);
        n=1;
	}
}
   if(n!=1)
{
     	 printf("Not found! %d is not present in the list.\n", search);
}
return 0;
}

