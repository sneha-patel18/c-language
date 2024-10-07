#include<stdio.h>

main()
{
	int size;
	
	printf("enter the size");
	scanf("%d",&size);
	
	int a[size];
	int i;
	
	for(i=0;i<size;i++)
	{
	   printf("a[%d]=",i);
	   scanf("%d",&a[i]);	
	}
	printf("negative elements from array");
	for(i=0;i<size;i++)
	{
		if(a[i]<0)
		printf("%d",a[i]);
	}
}
