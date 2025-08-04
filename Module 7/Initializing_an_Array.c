#include<stdio.h>
int main() 
{
    int ar[5]={10,20,30,40,50};
    for(int i=1;i<5;i++)
    {
        printf("%d\n",ar[i]);
    }
    return 0;
}

// Summary:
// Array ar[5] holds 5 integers.

// Loop prints elements from index 1 to 4.

// ar[0] skipped because loop starts from 1.