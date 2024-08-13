#include <stdio.h>
#include <conio.h>

main()
{
  int a;
  clrscr();
  printf("enter the value");
  scanf("%d",&a);
  (a>90&&a<100)
     ?printf("enter the any number A")
     : (a>91&&a<80)
	?printf("enter the any number B")
	: (a>81&&a<60)
	  ?printf("enter the any number c")
	  : (a>61&&a<50)
	    ?printf("enter the any number d")
	    : (a>51&&a<35)
	      ?printf("enter the any number e")
	      :printf("enter the any number f");
	       getch();
}