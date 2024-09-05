#include<stdio.h>
#include<conio.h>

main()

{
  int a, age;
  clrscr();

  printf("enter any number");
  scanf("%d",age);

  if(age<=18)
  {
   printf("candidate it is eligible for vote");
  }
  else
  {
    printf("condidate it is not eligible for vote");
  }

  getch();



}