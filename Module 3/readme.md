# Module 3 - Loop Basics in C

- **Loops** help repeat code multiple times without rewriting.
- **For Loop:** Repeats code with a counter.
  - Syntax: `for(initialization; condition; increment)`
- **While Loop:** Repeats code while a condition is true.
- **Do-While Loop:** Executes code at least once, then repeats while condition is true.
- **Control Statements:**
  - `break` stops the loop immediately.
  - `continue` skips current iteration and moves to next.
- **Modulus Operator `%`:**
  - Used to find remainder.
  - Helps check if a number is even (`num % 2 == 0`) or odd (`num % 2 != 0`).

## Example:

```c
for(int i = 1; i <= 10; i++) {
    if(i % 2 == 0) {
        printf("%d is even\n", i);
    }
}