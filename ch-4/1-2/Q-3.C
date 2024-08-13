#include<stdio.h>
#include<conio.h>

main()
{
    int x,y,ans;
    clrscr();
    printf("enter the first number :");
    scanf("%d",&x);
    printf("enter the second number :");
    scanf("%d",&y);
    ans=(x*x*x)+(3*x*y)+(3*x*y)+(y*y*y);
    printf("enter the formula:%d",ans);
    getch();
 }
