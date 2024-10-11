#include<stdio.h>

int add(int s,int d)
{	
	return s+d;
}

int sub(int s,int d)
{	
	return s-d;
}

int mul(int s,int d)
{
	return s*d;
}

float div(float s,float d)
{	
	return s/d;
}

int modual(int s,int d)
{	
	return s%d;
}

int main()
{
	int choice,i;
	int s,d;
	float a,b;
	
	do
	{
	
	printf("\n\n Calculator\n\n");
	printf(" 1 for Add\n");
	printf(" 2 for Sub\n");
	printf(" 3 for Mul\n");	
	printf(" 4 for Div\n");
	printf(" 5 for Modules\n");
	printf(" 0 for Exit\n");
	
	printf("\n\nEnter any number:");
	scanf("%d",&choice);
	
			switch(choice)
			{
				case 1:
					printf("Enter First Integer number:");
					scanf("%d",&s);
	
					printf("Enter Second Integer number:");
					scanf("%d",&d);
					
					printf("%d + %d = %d",s,d,add(s,d));
				break;
				
				case 2:
					printf("Enter First Integer number:");
					scanf("%d",&s);
	
					printf("Enter Second Integer number:");
					scanf("%d",&d);
					
					printf("%d - %d = %d",s,d,sub(s,d));
				break;
				
				case 3:
					printf("Enter First Integer number:");
					scanf("%d",&s);
	
					printf("Enter Second Integer number:");
					scanf("%d",&d);
					
					printf("%d * %d = %d",s,d,mul(s,d));
				break;
				
				case 4:
					printf("Enter First Integer number:");
					scanf("%f",&s);
	
					printf("Enter Second Integer number:");
					scanf("%f",&d);
					
					printf("%.2f / %.2f = %.2f",s,d,div(s,d));
				break;
				
				case 5:
					printf("Enter First Integer number:");
					scanf("%d",&s);
	
					printf("Enter Second Integer number:");
					scanf("%d",&d);
					
					printf("%d %% %d = %d",s,d,modual(s,d));
				break;
				
			default: 
				printf("Enter the value of Calculatur....");
		
			printf("\n");
				
			}
		}while(choice!=0);
		
	printf("\n");
}
