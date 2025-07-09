# C Programming Practice

# Module 1

## Practice 1: Basic Print

```c
#include <stdio.h>

int main() {
    printf("hi");
    return 0;
}
#include <stdio.h>: Standard Input Output header file for functions like printf.

int main(): Program starts here and returns an integer (usually 0).

printf("hi");: Prints "hi" on the screen.

return 0;: Ends program successfully.



### Practice 2: Using Escape Sequences

#include <stdio.h>

int main() {
    printf("hi\ni m urmi\ti am programmer");
    return 0;
}
\n: New line (moves output to next line).

\t: Tab space (adds horizontal space).

Output:
hi
i m urmi	i am programmer



### Practice 3: Printing % sign in C

```c
#include <stdio.h>

int main() {
    printf("I got 100%% mark");
    return 0;
}
To print a literal % sign in printf(), use %%.

Single % is a special character used for format specifiers.

%% tells printf to output a single %.

Output:****
I got 100% mark