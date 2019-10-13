//C Program to Check Whether a Character is an Alphabet or not
#include<stdio.h>
void main()
{
  char a;
  printf("Enter the value");
  scanf("%c",&a);
  if((a>=65)&&(a<97))
   {
      printf("Entered value is a charcter");
    }
  else
    printf("Entered value is not a character");
}
