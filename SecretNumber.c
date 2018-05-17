#include <stdio.h>
#include <math.h>

int main()
{
//Declared Variables
  int num=0,randNum=0;
  
  
 //random Declare
 srand(time(NULL));
 
 //Get a random number and ask for one
 randNum=rand()%100;
 printf("Guess a Number between 1 and 100!");
 scanf("%d",&num);
 
 
 //Number checker
    while(num != randNum)
    {
        if(num > randNum)
        {
            printf("Too High, guess again: ");
            scanf("%d",&num);
        }
        if(num < randNum)
        {
            printf("Too Low, guess again: ");
            scanf("%d",&num);
        }

    }
    
    printf("You got it!");    
    return 0;
   
}
