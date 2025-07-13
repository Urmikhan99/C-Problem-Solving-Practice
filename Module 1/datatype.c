#include <stdio.h>
int main()

{   int apple = 33;
    printf ("%d",apple);

    return 0;
}


//  int apple = 33; → declare integer variable
//  printf("%d", apple); → print integer value of apple
//  %d = format specifier for int
//  Output: 33


#include <stdio.h>

int main()

{   float apple = 98.2;
    printf ("%f",apple);
    // printf (".2%f",apple); (দশমিকের পর ২ ঘর পর্যন্ত দেখাবে)

    return 0;
}

//  #include <stdio.h> → header file for input/output (like printf)
//  float apple = 98.2; → declare float (decimal) variable (দশমিক সংখ্যা)
//  printf("%f", apple); → print float value of apple
//  %f = format specifier for float
//  Output: 98.200000 (default shows 6 digits after decimal)


#include <stdio.h>

int main()
{
    char apple = 44; 
    printf ("%c", apple);  // Prints ASCII character for 44 → ','
    return 0;
}
// char = single character variable, 44 এর ASCII মান হলো , |

// %c = format specifier to print character(অক্ষর (character) প্রিন্ট করার জন্য format specifier)


