//C Program to Check Whether a Character is Vowel or Consonant
#include<stdio.h>
void main()
{
  char c;
  printf("Enter a character\t");
  scanf("%c",&c);
  if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))
  {
    printf("The Entered character %c is a vowel",c);
    }
  else 
   {
      printf("The Entered character %c is a Consonant",c);
    }

}
