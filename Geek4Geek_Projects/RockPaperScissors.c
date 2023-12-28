#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
    {
        // Variables for User Input + Create a rand for the user to play against 

            srand(time(NULL));
            int userI;
            int maxnum = 3;
            int computer = rand() % (maxnum + 1);   // check if the computer variable is working:    printf("%d", computer);

        // Ask user for Input. Input of rock, paper, scissors
            printf("\n1 for Rock \n2 for Paper \n3 for Scissors\n\n");
            scanf("%d", &userI);
        
        // Print the results of the Computer printf("\nThe Computer Choose %d", computer);

        // Checks if the computers results is greater than the user inputs
            
            if ( userI == computer) {
                printf("Your Choice %d  \nthe Computers Choice %d", userI,computer);
                printf("\nA Draw!");
            } else if ( userI >= computer) {
                printf("Your Choice %d \n the Computers Choice %d", userI,computer);
                printf("You won");
            } else {
                printf("Your Choice %d \nthe Computers Choice %d", userI,computer);
                printf("\nYou lost ");
            }

        return 0;
    }
