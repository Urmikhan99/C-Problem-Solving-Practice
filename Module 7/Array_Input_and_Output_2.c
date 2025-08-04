// #include<stdio.h>
// int main() 
// {
//     int ar[5];
//     for (int i=0;i<5;i++)
//     {
//         printf("ar[%d]\n",i);
//     }
//     return 0;
// }

// What is an array?
// An array is a collection of elements of the same data type 
// stored in contiguous memory locations.
// It allows storing multiple values using a single variable name.

// int ar[5]; 
// This declares an integer array 'ar' with 5 elements: ar[0] to ar[4]

// 🔁 Accessing Array Elements:
// for (int i = 0; i < 5; i++) {
//     printf("ar[%d]\n", i);
// }
// This loop prints the index of each element in the array.
// You can also assign values: ar[0] = 10; etc.

// ✅ Arrays are useful for:
// - Storing multiple values together
// - Reducing code redundancy
// - Loop-based operations (sorting, searching, etc.)


#include<stdio.h>
int main() 
{
    int ar[5];
    for (int i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",ar[i]);
    }
    
    return 0;
}

