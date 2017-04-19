#include <stdio.h>
#include <math.h>
#include "factorial.h"

double dfactorials(double in)
{
	int i,n;
	long long int fact=1;
	n=(int)in;
        if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
	else if (n>170)
		printf("Inf");
        else
        {
           for(i=1; i<=n; i++)
           {
              fact=fact*i;
	      //printf("\n %lld",fact);
           }
        }

    return fact;
}
