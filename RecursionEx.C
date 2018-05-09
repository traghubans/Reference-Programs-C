/******************************************************************************

                            Travis Raghubans
                            Reference Program

*******************************************************************************/

#include <stdio.h>


int main()
{
   //Declared Variables
   int n,sum;

   //Ask for a number
   printf("Please enter your number now:");
   scanf("%d",&n);

   //Function call and print
   sum = RecSum(n);
   printf("%d",sum);
   return 0;
}

int RecSum(int n)
{
    //Declared Variables
    int sum=0;

    //So here, we're completing this program until n = 1
    //The reason is because this is our terminating condition
    if(n == 1)
    sum++;
    //This else statement is where the recursive call occurs
    //Recursion is like an infinity mirror, that keeps going until your eyes can't see further
    //We add n, so we have our previous value each time
    else
    sum += (n + RecSum(n-1));

    return sum;

}
