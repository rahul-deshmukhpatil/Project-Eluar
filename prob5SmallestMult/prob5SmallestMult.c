#if COMMENT
Smallest multiple
Problem 5
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#endif

#include "stdio.h"

int greatestFact(int no, int result)
{
    int i;
    int greatest= 1;
    for(i=1; i< no; i++)
    {
        if(!(no%i) && !(result %i))
            greatest = i;
    }
    return greatest;
}
int main(int argc, int argv[])
{
    int i,no;
    unsigned long long result = 1;
    scanf("%d", &no);
    for(i=2; i< no ; i++)
    {
        result *= (result%i? (i/greatestFact(i, result)):1);
    }
    printf("%d\n", result);
    return 0;
}

