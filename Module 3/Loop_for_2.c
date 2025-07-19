#include<stdio.h>
int main()
{   
    int i;
    for(i=3; i<=5; i=i+2)
        printf("CSE\n");

    printf("%d", i);
    return 0;
}

//In each iteration, i increases by 2 (i = i + 2).
//So, the loop runs for i = 3 and i = 5 only, printing 2 times.
//printf("%d", i); prints the final value of i, which is 7.