#include <stdio.h>

int main() {
    int choice;
    int seats = 50; 

    while (1) {
        printf("\n----- Bus Ticket Booking System -----\n");
        printf("1. Check available seats\n");
        printf("2. Book a ticket\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
				if (seats > 0) {
                     printf("YES, seats are available.\n");
                     seats--;
               } else{
                          printf("NO, seats are not available.\n");
                     }
                break;
               
                     
            
            case 2:
                if (seats > 0) {
                    printf("Ticket booked successfully! Enjoy your journey.\n");
                    seats--;
                } else {
                    printf("Sorry, no seats available.\n");
                }
                break;
            
            case 3:
                printf("Exiting the program.\n");
                return 0;
            
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    return 0;
}

