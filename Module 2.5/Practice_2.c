#include<stdio.h>
int main()
{   int a,b; 
    
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d\n",a,b, a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b, a*b);
    printf("%d/%d=%.2f\n",a,b,(float)a/b);
    return 0;
}


// You need to take two integer values as input and show the summation, subtraction, multiplication and division in the given format below.

// For example:
// Inputs are 5 and 2
// Then you’ll give output as:
// 5 + 2 = 7
// 5 - 2 = 3
// 5 * 2 = 10
// 5 / 2 = 2.50


// Sample Input
// Sample Output
// 5 2 
// 5 + 2 = 7
// 5 - 2 = 3
// 5 * 2 = 10
// 5 / 2 = 2.50
// 10 3
// 10 + 3 = 13
// 10 - 3 = 7
// 10 * 3 = 30
// 10 / 3 = 3.33



// 🔑 Key Notes:
// scanf("%d %d", &a, &b) → Reads two integers.

// printf("%d+%d=%d\n", a, b, a+b) → Shows result of addition.

// %d → Format specifier for integers.

// %f / %.2f → For floating-point numbers; .2 means 2 decimal places.

// (float)a / b → Type casting needed to avoid integer division (which gives only whole number).

