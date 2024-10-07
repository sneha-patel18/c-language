#include <stdio.h>
main()
{
        int row, col;
        
        printf("Enter row : ");
        scanf("%d",&row);
        printf("Enter col : ");
        scanf("%d",&col);
        
        int a[row][col];
        int i,j;

        printf("Enter array Elements : ");
        
        for(i=0;i<row;i++)
		{
            for(j=0;j<col;j++)
			{
                printf("a[%d][%d] = ",i,j);
                scanf("%d",&a[i][j]);
            }
                printf("\n");
        }
       
        printf("\nEnter the row no. : ");
        scanf("%d",&j);
        
		printf("\nElements from row %d : ",j);
		
        for(i=0;i<row;i++)
		{
            printf("%d, ",a[i][j]);
        }
        
        int sum = 0;
        
        for(i=0;i<row;i++)
		{
            sum += a[j][i];
        }
        printf("\nSum of Elements from row %d : ",j);
        printf("%d",sum);
        
        printf("\nEnter the col no. : ");
        scanf("%d",&i); 
        
		printf("\nElements from col %d : ",i);
		
        for(j=0;j<row;j++)
		{
            printf("%d, ",a[i][j]);
        }
        for(j = 0,sum = 0;j < row;j++)
		{
            sum += a[i][j];
        }
        printf("\nSum of Elements from col %d : ",j);
        printf("%d",sum);

        
}
