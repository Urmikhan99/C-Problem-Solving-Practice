#include<stdio.h>
int main()
{
    int i;
    for(int i=3;i<=7;i=i+1) // ❌ Do NOT put ; after the for(...),that ends the loop early and causes logic error.
    {
    printf("Urmi's Code\n");
    }
    return 0;
}

// 🧠 Key Points:
// This for loop starts from i = 3 and runs while i <= 7.
// Inside the loop, printf("Urmi's Code\n"); will be printed 5 times (for i = 3 to 7).
// ❌ Do NOT put ; after the for(...) — that ends the loop early and causes logic error.
// ✅ Loop body is correctly defined inside { ... }.


