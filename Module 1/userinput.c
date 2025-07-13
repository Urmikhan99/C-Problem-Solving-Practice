// #include <stdio.h>
// int main()
// {
//    int a;
//    scanf ("%d",&a);
//    printf("%d",a);
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    int a;                             // integer variable
//    float b;                           // float (decimal) variable
//    char c;                            // character variable
//    scanf ("%d %f %c",&a,&b,&c);
//    printf("%d %f %c",a,b,c);
//    return 0;
// }


// #include <stdio.h>
// int main()
// {
//    int a;                            
//    float b;                           
//    char c;                            
//    scanf ("%d %f %c",&a,&b,&c);
//    printf("%d%% %f %c",a,b,c);
//    return 0;
// }


// #include<stdio.h>
// int main()
// {   int a;
//     scanf("%d%%",&a);
//     printf("Your input %d%%",a);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {   int a;
//     int b;
//     scanf("%d %d",&a,&b);
//     printf("Your result %d ",a+b);  // Print the sum of a and b
//     return 0;
// }


// #include<stdio.h>
// int main()
// {   int R;
//     float T;
//     int result;

//     scanf("%d %f",&R,&T);
//     result=R+T;
//     printf("%d",result);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {   int R=1000000000;
//     long long int b=1000000000;    // 🔹 %lld → Long Long Decimal
//     printf("%lld",b);
//     return 0;
// }

#include<stdio.h>
int main()
{   
    double R=100000.0000;    // 🔹 %lf → Long Float (used for double)
    printf("%lf",R);
    return 0;
}

// 🧠 Shortcut :
// 🔹 %lld → Long Long Decimal
// 🔹 %lf → Long Float (used for double)