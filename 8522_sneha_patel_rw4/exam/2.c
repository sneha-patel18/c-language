#include<stdio.h>

main()
{
	int row,col;
	
	printf("Enter The number row :");
	scanf("%d\t",&row);
	printf("Enter The number col :");
	scanf("%d\t",&col);
	
	int a[row][col];
	int i;
	int sum;
	
	for(i=1;i<=9;i++)
	{
	   printf("%d\t",a[row][col]);
	}
	
}
