#include<stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int ar[n];
    // Takes array size input from the user.
    // Declares a variable-length array.
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    //Loops n times to fill the array with user inputs.
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
    //Initializes a variable sum to 0 and adds each element of the array to it.
    printf("%d",sum);
    return 0;
}