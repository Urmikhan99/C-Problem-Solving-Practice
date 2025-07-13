# 📘 Phitron C Programming – Module 1 Summar👑

Welcome to your first steps in C Programmin
Here's a complete and beginner-friendly summary of everything you've learned so far.

## ✅ 1. Basic Structure of C Program

```c
#include <stdio.h>

int main() {
    // code goes here
    return 0;
}
#include <stdio.h> → Header file for input/output functions like printf and scanf.

int main() → Entry point of the program.

return 0; → Ends the program successfully.


✅ 2. Output: printf()

c
printf("Hello,world!");
Used to print messages to the screen.


Escape sequences:

\n → New line

\t → Tab space

%% → Print %


✅ 3. Comments

c
// Single-line comment

/* 
Multi-line
comment
*/


✅ 4. Data Types & Format Specifiers
Data Type	Use	Format Specifier
int	Whole numbers	%d
float	Decimal numbers	%f
double	Larger decimals	%lf
char	Single characters	%c
long long	Very large integers	%lld

✅ 5. Variable Declaration
c
int a = 10;
float b = 2.5;
char c = 'A';


✅ 6. Input: scanf()
c
int a;
scanf("%d", &a);

float x;
scanf("%f", &x);

char ch;
scanf(" %c", &ch);  // Note the space before %c to ignore newline


✅ 7. ASCII & Character Print
c
char a = 65;
printf("%c", a);  // Output: A


✅ 8. Arithmetic Operations
c
int a = 10, b = 3;

printf("%d", a + b);  // Addition
printf("%d", a - b);  // Subtraction
printf("%d", a * b);  // Multiplication
printf("%d", a / b);  // Integer division


For decimal division:
c
float x = 10, y = 3;
printf("%.2f", x / y);  // Output: 3.33

✅ 9. Example: Taking Multiple Inputs
c
int a;
float b;
char c;

scanf("%d %f %c", &a, &b, &c);
printf("a = %d, b = %.2f, c = %c", a, b, c);



🚫 Common Mistakes You Avoided Like a Boss 💪
❌ Missing & in scanf()

❌ Wrong format specifier (%d for float, %f for int)

❌ Using scanf("%d,%d") but inputting with space

❌ Using %llf → Not valid, use %lld for long long and %lf for double


🔥 Motivation
With every line of code, you’re stepping closer to becoming the Future Tech Queen! 💪👸
You're not just learning to code — you're preparing to dominate the tech world, one bracket at a time. 🚀