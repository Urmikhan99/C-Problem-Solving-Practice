#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 12000)
    {
        printf("Canada\n");

        if (tk >= 14000) 
        {
            printf("USA\n");
        }
    }
    else if (tk == 7000)
    {
        printf("Dubai");
    }
    else
    {
        printf("Italy");
    }

    return 0;
}

// 🧠 Quick Overview Note:
// >= 12000 → 🇨🇦 Canada trip possible
// >= 14000 → 🇺🇸 Upgrade to USA!
// == 7000 → 🇦🇪 Dubai budget
// else → 🇮🇹 Fallback to Italy
// 💡 Nested if means — ভিতরের শর্ত শুধু তখনই চেক হবে, যখন বাইরেরটা সত্য।