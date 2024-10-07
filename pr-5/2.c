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
	
	printf("\n\nenter array elements\n\n");
	for(i=0;i<row;i++)
	{
	   for(j=0;j<col;j++)
	   {
	   printf("a[%d][%d]=",i,j);
	   scanf("%d",&a[i][j]);
       }
       printf("\n");
	}
     int larg;
     
     larg=a[0][0];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
	      	if(a[i][j]>larg)
		    {
	        larg= a[i][j];
	        }
	    }
	}
	printf("the larg elements is %d",larg);
}
