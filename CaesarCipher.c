//Travis Raghubans

/* -------------- Instructions to compile -------------------

In the unix terminal, please type in gcc CaesarCipher.c
After you have loaded with no errors, please go ahead and type ./a.out
From there, you should be prompted to type in your message and the number key.

--------------- End Instructions -------------------------- */


//Pre-Processor Directives 
#include <stdio.h>
#include <stdlib.h>


//Main Function
int main()
{
    //Declared Variables 
    char a[200], buffer;
    int i, keyval;

    //Get a message from the user 
    printf("Enter the message now: ");
    scanf("%s",a);

    
    printf("\n");

    //Get the key from the user
    printf("Enter the key shift you would like: ");
    scanf("%d",&keyval);

    //Preform the shift based on the keyval
    for(i = 0; a[i] != '\0'; i++)
    {
        buffer = a[i];

        //This if statement will complete the the ascii translation and preform the cipher coversion
        if(buffer + 'A' && buffer <= 'Z')
        {
            buffer -= keyval;
            buffer += 32;
        
            if(buffer < 'a')
                buffer += 26;
        
            a[i] = buffer;
        }
        
        
        //This statement does the same as the previous, but will account for lowercase letters
        if(buffer + 'a' && buffer <= 'z')
        {
            buffer -= keyval;
            
            if(buffer < 'a')
                buffer += 26;
    
            a[i] = buffer;
        }
    

    }
    
    //Print the encrypted message
    printf("Encrypted message: %s", a);
    printf("\n");

    return 0;

}
