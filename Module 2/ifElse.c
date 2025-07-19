#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if (tk == 900)
    {
        printf("pizza");
    }
    else{
        printf("burger");
    }
    return 0;
}

// Key points:
// The if block executes when the condition is true.
// The else block executes when the condition is false.
// scanf("%d", &tk); reads an integer input from the user.
// printf() displays output on the screen.

#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if (tk >= 900)  // If tk is greater than or equal to 900
    {
        printf("pizza");
    }
    else{
        printf("burger");
    }
    return 0;
}

// if (tk >= 900) checks if tk is 900 or more.
// Executes printf("pizza") if true.
// Executes printf("burger") if false.
// Reads input using scanf.


#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if (tk <= 900)      // If tk is less than or equal to 900
    {
        printf("pizza");
    }
    else{
        printf("burger");
    }
    return 0;
}

// Key Points:
// tk <= 900 checks if tk is less than or equal to 900.
// If true → prints pizza
// Else → prints burger