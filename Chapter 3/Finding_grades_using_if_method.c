// Write a program to find grade of a student given his marks based on below
/*
90 – 100
⇒
  A
80 – 90
⇒
  B
70 – 80
⇒
  C
60 – 70
⇒
  D
50 – 60
⇒
  E
<50
⇒
F
*/

#include <stdio.h>

int main()
{
  int marks;
  printf("Enter the marks of student : ");
  scanf("%d", &marks);

  if (marks >= 90)
  {
    printf("Your achieved grade A");
  }

  else if (marks >= 80)
  {
    printf("Your achieved grade B");
  }

  else if (marks >= 70)
  {
    printf("Your achieved grade C");
  }

  else if (marks >= 60)
  {
    printf("Your achieved grade D");
  }

  else if (marks >= 50)
  {
    printf("Your achieved grade E");
  }

  else
  {
    printf("Your achieved grade F i.e. you are fail!");
  }

  return 0;
}