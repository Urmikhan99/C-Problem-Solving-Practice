#include<stdio.h>
 int main()
 {
    int tk;
    scanf("%d",&tk);
    if( tk == 500)
    {
        printf("Chicken");
        
    }
    else if(tk >= 900)
    {
        printf("mutton");

    }
    else{
        printf("beef");
    }
    return 0;
 }


//  Key Points:
// if checks first condition (tk == 500).

// else if checks next condition (tk >= 900) if first is false.

// else executes if all above conditions are false.

// scanf reads integer input.

// printf prints output based on condition