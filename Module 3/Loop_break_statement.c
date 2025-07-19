#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10; i=i+1)
    {
        // if(i == 7)
        // {
        //     break;
        // }
        printf("%d\n",i);
        if(i == 7)
        {
            break;
        }
    }
    return 0;
}


// 🚨 Why use break?
// To exit a loop early based on a condition.
// Commonly used in loops or switch statements.
// Useful for saving time or skipping unnecessary steps