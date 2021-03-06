//    A C program with footnotes to generate and print a table of the first 10 factorials.

//  (1)
#include <stdio.h>

int main (void)
{

//  (2)
    int fact = 1, f = 1;

//  (3)
/* (4) */   for ( f = 1 ; 
/* (5) */       f < 11 ;
/* (6) */       f++ )
        {

//  (7)
        fact *= f;

//  (8)
        printf ( "%i! is %i. \n\n", f, fact );

        }

//  (9)
    return 0;
}

//  (1)
//    Do the standard initial C bits.

//  (2)
//    Declare and initialize at one integers variables of:
//    f, for the current factorial being calculated
//    fact, for the complete current factorial.

//  (3)
//    For loop to generate ten factorials.

/* (4) */
//    For loop:
//    Initial: f = 1.


/* (5) */
//    Looping conditions:
//    f being less than 11.

/* (6) */
//    Evaluation:
//    increment f.

//  (7)
//  Generate the current factorial by having fact with the current amount
//  then have fact tobe fact multiplied by f.

//  (8)
//  Print f as the current number being factored, and fact as the current factorial.

//  (9)
//  There is nothing to return.
