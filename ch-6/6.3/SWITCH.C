#include<stdio.h>
#include<conio.h>
main()
{
   int a;
   clrscr();
   printf("press 1 for English\n");
   printf("press 2 for hindi\n");
   printf("press 3 for gujarati\n");

   printf("enter any number:");
   scanf("%d",&a);

   switch(a)
   {
   case 1:
	  clrscr();
	  printf("press 1 for internet recharge\n");
	  break;
   case 2:
	  clrscr();
	  printf("press 2 for top-up recharge\n");
	  break;
   case 3:
	  clrscr();
	  printf("press 3 for special recharge\n");
	  break;

   }
   getch();
}