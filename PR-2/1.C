#include <stdio.h>
#include <conio.h>

main()
{
  int a;
  clrscr();
  printf("please enter the marks");
  scanf("%d",&a);
  (a>90&&a<=100)
     ?printf("your grade is A")
     : (a>80&&a<=91)
	?printf("your grade is B")
	: (a>60&&a<=81)
	  ?printf("your grade is c")
	  : (a>50&&a<=61)
	    ?printf("your grade is d")
	    : (a>35&&a<=51)
	      ?printf("your grade is e")
	      :printf("your grade is f");
	       getch();
}