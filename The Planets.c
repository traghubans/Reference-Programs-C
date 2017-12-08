//The Planet Problem - Travis Raghubans

//Pre-Processor Directives
#include <stdio.h>
#include <math.h>

    //Main Function
    int main()
    {
        //Defined Variables
        #define Mercury_Diameter 4879
        #define Venus_Diameter 12104
        #define Earth_Diameter 12756
        #define Mars_Diameter 6792
        #define Mercury_Distance 57910000
        #define Venus_Distance 108200000
        #define Earth_Distance 149600000
        #define Mars_Distance 227900000
        #define Mercury_Moon 0
        #define Earth_Moon 1
        #define Mars_Moon 2

        //Declared Variables
        double pi, moons, radius, y, x, area;
        char planet;


        //User Input / Introduction
        printf("Welcome to the program Learning about Planets!\n");
        printf("Please enter the first letter of the name of the planet in the Solar System about which you would like to learn more.\n");
        printf("If you'd wish to learn about Mars, please enter 'a'!\n");
        scanf(" %c", &planet);


        //Arithmetic
        pi = (4*3.14159265);
        y = (2.00);


        //Switch Statements
        switch (planet)
        {


        //Switch for Mercury
        case 'm':
            printf("You've selected to learn about Mercury!\n");
            radius = Mercury_Diameter/2;
            x = pow(radius,y);
            area = x*pi;
            printf("The surface area of Mercury is %.2lf square km.\n", area);
            printf("Mercury is %d Km. away from the sun.\n", Mercury_Distance);
            printf("Mercury has %d moons.\n", Mercury_Moon);
            break;

        //Switch for Venus
        case 'v':
            printf("You've selected to learn about Venus!\n");
            radius = Venus_Diameter/2;
            x = pow(radius,y);
            area = x*pi;
            printf("The surface area of Venus is %.2lf square km.\n", area);
            printf("Venus is %d Km. away from the sun.\n", Venus_Distance);
            printf("Venus has %d moons.\n", Mercury_Moon);
            break;

        //Switch for Earth
        case 'e':
            printf("You've selected to learn about Earth!\n");
            radius = Earth_Diameter/2;
            x = pow(radius,y);
            area = x*pi;
            printf("The surface area of Earth is %.2lf square km.\n", area);
            printf("Earth is %d Km. away from the sun.\n", Earth_Distance);
            printf("Earth has %d moons.\n", Earth_Moon);
            break;

        //Switch for Mars
        case 'a':
            printf("You've selected to learn about Mars!\n");
            radius = Mars_Diameter/2;
            x = pow(radius,y);
            area = x*pi;
            printf("The surface area of Mars is %.2lf square km.\n", area);
            printf("Mars is %d Km. away from the sun.\n", Mars_Distance);
            printf("Mars has %d moons.\n", Mars_Moon);
            break;

        default:
            printf("Sorry, the letter you have chosen seems to not be in our database!");
            break;

        }

        return 0;

    }
