 #include<stdio.h>
int main()
{
    int i;
            //do while
    i=1;
    do
    {
        printf("%d\n",i);
        i=i+11;

    }
    while(i<=5);
    return 0;
}





// In this code:
// i starts at 1.
// The loop prints i (which is 1 initially).
// Then, i is increased by 11 (so i becomes 12).
// The condition i <= 5 is checked after the first iteration.
// Since 12 <= 5 is false, the loop stops.
// So, this loop prints 1 only once.
