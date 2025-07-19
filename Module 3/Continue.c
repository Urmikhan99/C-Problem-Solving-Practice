#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10; i=i+1)
    {
        if(i == 8)
        {
            continue;          // Skip this iteration
        }
        printf("%d\n",i);      // Print i (except when i = 3)
    }
    
    
    return 0;
}



// 📌 Important Points:
// The for loop runs from 1 to 10.
// When i == 3, continue; is executed:
// It skips the printf() for that iteration only.
// Goes to the next loop cycle.
// So, 3 is not printed.

// 🚨 Why use continue?
// To skip a specific case inside a loop.

// Useful when you want to avoid certain values but still continue looping.