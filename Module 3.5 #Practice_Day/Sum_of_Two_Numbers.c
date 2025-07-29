#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);  // Input two integers
    int sum = A + B;         // Sum them
    printf("%d\n", sum);     // Print the result
    return 0;
}



                                    // Note
// In Question -10^9 <= A, B <= 10^9 মানে হলো:
// ইনপুট হিসেবে আসা A আর B সংখ্যাগুলো কমপক্ষে -1,000,000,000 (এক বিলিয়নের নেতিবাচক মান) হতে পারে,
// এবং সর্বোচ্চ 1,000,000,000 (এক বিলিয়নের ধনাত্মক মান) হতে পারে।
// Constraints - ইনপুটের বৈধ সীমা কী







// Problem Statement

// Take two integers A and B as input and output their summation.

// Input Format

// You will be given A and B separated by a space.
// Constraints

// -10^9 <= A,B <= 10^9
// Output Format

// Output their summation
// Sample Input 0

// 2 3
// Sample Output 0

// 5
// Sample Input 1

// -10 5
// Sample Output 1

// -5