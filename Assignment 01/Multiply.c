#include<stdio.h>
int main()
{
    long long int A, B;
    scanf("%lld %lld", &A, &B);
    printf("%lld\n", A * B);
    return 0;
}

                        // 🧠 What It Does:
// Takes two integers A and B as input.
// Prints their multiplication result.
// Uses long long int to handle large number limits up to 10^18.

// ✅ Input Format:
// Two integers A and B.

// ✅ Output Format:
// The result of A * B.

// Problem Statement

// You will be given two integers A and B. You need to give output their multiplication.

// Input Format

// Input will contain A and B
// Constraints

// -10^9 <= A,B <= 10^9
// Output Format

// Output the multiplication
// Sample Input 0

// 10 50
// Sample Output 0

// 500
// Sample Input 1

// 10000000 10000000
// Sample Output 1

// 100000000000000
// Sample Input 2

// -100 62
// Sample Output 2

// -6200