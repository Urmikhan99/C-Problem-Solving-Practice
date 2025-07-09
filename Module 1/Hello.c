// // // Practice -1 (print hi)

#include <stdio.h>
int main() 
{
    printf("hi");  
    return 0;
}



// // // 2nd practice (escape sequence use --\n= new line , \t=tab)

#include<stdio.h>
int main ()
{
    printf("hi\ni m urmi\ti am programmer");
     return 0;
}



// // 3rd practice -( show % )
#include<stdio.h>
int main()
{
    printf("I got 100%% mark");
    return 0;
}


                               // Note                  

 #include<stdio.h>   
// // This is a header file needed for input/output functions.
// // stdio = Standard Input Output
// // h     = Header file
// // It is a standard system header file included using <angle brackets>
// // Required for functions like: printf(), scanf(), getchar(), etc.

int main ()  
// // “এখান থেকে প্রোগ্রাম শুরু হবে (main), আর শেষে একটা সংখ্যা (সাধারণত 0) রিটার্ন করবে(int)” ✅
// // 🔸 main() = Program starts here
// // 🔸 int = Return type (integer, usually 0)
// // 🔸 () = Function parameters (empty in this case)

{
    printf("hi");
// // 🔹 printf = "print formatted"
// // 🔹 Comes from the stdio.h header file
// // 🔹 Displays "hi" on the screen
// // 🔹 Any text inside "" will be printed exactly as shown
    return 0;
// // 🔹 Ends the main() function
// // 🔹 Returns 0 to show the program ran successfully
}


// // 2nd practice (escape sequence use --\n= new line , \t=tab)
#include<stdio.h>

int main ()
{
    printf("hi\ni m urmi\ti am programmer");
    
    return 0;
}
// Note- printf("hi\ni m urmi\ti am programmer");
// 🔹 \n = new line (hi → next line)
// 🔹 \t = tab space (adds gap between words)


// 3rd practice 
// #include<stdio.h>
// int main()
// {
//     printf("I got 100%% mark");
//     return 0;
// }

// কেন %% ব্যবহার করতে হয়?
// % printf-তে format specifier শুরু করার জন্য ব্যবহৃত হয়।

// যদি তুমি আসল % দেখতে চাও, তাহলে %% লিখতে হবে।

// printf তখন এটা বুঝবে, “ওহ এটা আসল % চিহ্ন, format specifier না।”

