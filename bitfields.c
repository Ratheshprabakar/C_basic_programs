

#include <stdio.h>
struct variable
{
    unsigned int x:5;
    int y:3;
    char A;
};
    void main()
    {
        struct variable s;
        s.x=5;
        s.y=5;
        printf("The Unsigned Integer is %d\n The Integer number is %d\n The Character entered is A",s.x,s.y);
    }