#include<stdio.h>

main()
{
	int row,col;
	
	printf("enter the size");
	scanf("%d",&row);
	printf("enter the size");
	scanf("%d",&col);
	
	int a[row][col];
	int i,j;
	
	printf("\n\n enter array elements\n\n");
	for(i=0;i<row;i++)
	{
	   for(j=0;j<col;j++)
	   {
	   printf("a[%d][%d]=",i,j);
	   scanf("%d",&a[i][j]);
       }
       printf("\n");
	}

   	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
	      printf("%d",a[j][i]);
	    }
	    printf("\n");
	}
}
