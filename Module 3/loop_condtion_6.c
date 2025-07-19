// Write a C program that prints whether numbers from 1 to 10 are even or odd. Use a loop and condition checking.
// #include<stdio.h>
// int main()
// {
//     int i;
//     for(i=1,i<=2,i+=1)
//     {
//         if (i%2 == 0)
//         {
//             printf("%d-Even\n",i);
//         }
//         else
//         {
//             printf("%d-odd\n",i);
//         }
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int i;
    for(i=1;   i<=100;    i++ )
       //শুরু    শর্ত      পরিবর্তন
    {
        if (i % 2 != 0)
        // যদি ভাগশেষ ১ থাকে বিজোড়
        {
            printf("%d-Odd \n",i);
        }
    }
    return 0;
}


// for(i = 1; i <= 100; i++)   Loop from 1 to 100
// i % 2 != 0	Checks if the number is odd (remainder is not 0 when divided by 2)
// printf("%d - Odd\n", i);	Prints the current odd number with label "Odd"

// 💡 Quick Tip:
// i % 2 != 0 → checks for Odd

// i % 2 == 0 → checks for Even

