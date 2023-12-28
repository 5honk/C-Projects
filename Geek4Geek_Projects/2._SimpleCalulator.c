// Created by 5honk - github

#include <stdio.h>

int main()
    {
        // Varaibles to store input 1 and 2, arithmatic
            int i1,i2,new;
            char sym;


        // Ask user for input 1
            printf("\n\t\t\t\tBasic Calculator - Made by 5honk");
            printf("\n\n\t\t\t\tEnter a Number : ");
            scanf("%d", &i1);

        // ask what arithmatic calculation 
            printf("\t\t\t\tEnter arithmatic ");
            scanf("%s", &sym);

        // Ask user for input 2 
            printf("\t\t\t\tEnter a Number :");
            scanf("%d", &i2);

        // calculate the two given numbers + the arithmatic chosen 
            if (sym == '+') {
                int new = i1 + i2;
                printf("\t\t\t\t%d", new);
            } else if (sym == '-') {
                int new = i1 - i2;
                printf("\t\t\t\t%d", new);
            } else if (sym == '*') {
                int new = i1 * i2;
                printf("\t\t\t\t%d", new);
            } else if ( sym == '/') {
                int new = i1 / i2;
                printf("\t\t\t\t%d", new);
            }

        return 0;
    }
