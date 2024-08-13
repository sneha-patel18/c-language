#include <stdio.h>
#include <conio.h>

main()
{
  int a;
  char b;
  clrscr();
  printf("enter the value");
  scanf("%d",&a);
   (a>90&&a<100)
     ? b='a'
     :(a>91&&a<80)
	? b='b'
	: (a>81&&a<60)
	  ? b='c'
	  : (a>61&&a<50)
	    ?b='d'
	    : (a>51&&a<35)
	      ?b ='e'
	      :b ='f';
   switch(b)
   {
    case 'a':
      clrscr();
      printf("enter the grade a,excellent work!");
      break;
    case 'b' :
      clrscr();
      printf("enter the grade b,well done");
      break;
    case 'c':
      clrscr();
      printf("enter the grade c,good job");
      break;
    case 'd':
      clrscr();
      printf("enter the grade d,you passed");
      break;
    case 'e':
      clrscr();
      printf("enter the grade e,passed");
      break;
    case 'f':
      clrscr();
      printf("enter the grade f,sorry,you failed");
      break;
    default :
      clrscr();
      printf("invalid choice....");
   }
    getch();
    }