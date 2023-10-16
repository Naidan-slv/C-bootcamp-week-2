#include <stdio.h>
int main() 

// add in
// Checking that the value is over 60 for a 2:1
// check the value is over 70 for a first
// check that the value is a valid mark (between 0 and 100 inclusive)

{
    int i;
    int mark;
    printf ("Enter the mark: \n");
    scanf ("%d", &mark);
    if (mark >= 70)
    { 
        printf ("The mark of %d is a first\n", mark);
    }
    else if
    ((mark <= 70) && (mark >= 60))
    {
         printf ("The mark of %d is a 2:1 \n", mark);
    }
    else if
    ((mark < 60) && (mark > 0))
    {
         printf ("The mark of %d is a fail\n", mark);
    }
    else
    {
        printf("Run code again and enter a correct value\n ");
    }
    return 0;
    
    }