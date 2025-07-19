// // Write a C program using a for loop to calculate the sum of numbers from 1 to 10. Print the total sum.
#include<stdio.h>
int main()
{
    int sum=0;
    int i;
    for(i=1;i<=10;i=i+1)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}

// ✍️ Short Note (in English):
// This program initializes a variable sum to 0.
// It uses a for loop to iterate from i = 1 to i = 10.
// In each iteration, the value of i is added to sum using sum += i;.
// After the loop finishes, the final value of sum (which is the total of 1 to 10) is printed.
// Output: 55

// Reverse Loop Sum (10 to 1): 55
#include<stdio.h>
int main() 
{
    int i,sum;
    sum=0;
    for(i=10;i>=1;i--)
    {
        sum+=i;
    }
    printf("Reverse Loop Sum (10 to 1): %d\n", sum);
    return 0;
}

// Even Number Sum (1 to 10): 30
#include<stdio.h>
int main() 
{
    int i,sum;
    sum=0;
    for(i = 1; i <= 10; i++)
     {
        if(i % 2 == 0) 
        {
            sum = sum + i;
        }
    }
    printf("Even Number Sum (1 to 10): %d\n", sum);
    return 0;
}

// Odd Number Sum (1 to 10): 25
#include<stdio.h>
int main() 
{
    int i,sum;
    sum=0;
      for(i = 1; i <= 10; i++)
    {
        if(i % 2 == 1) 
        {
            sum = sum + i;
        }
    }
    printf("Odd Number Sum (1 to 10): %d\n", sum);
    return 0;
}

// Write a C program that takes two integers as input (starting number and ending number), 
//and calculates the sum of all integers from the starting number to the ending number using a for loop.
#include <stdio.h>
int main()
{
    int start, end, sum = 0, i;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++) {
        sum = sum + i;
    }

    printf("Sum from %d to %d: %d\n", start, end, sum);

    return 0;
}